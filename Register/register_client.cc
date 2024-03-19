#include <grpcpp/grpcpp.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/health_check_service_interface.h>
#include <etcd/Client.hpp>
#include <etcd/Watcher.hpp>
#include <shared_mutex>
#include <galay/util/stringutil.h>
#include <spdlog/spdlog.h>
#include "register.grpc.pb.h"
#include <cstdio>

std::string g_EtcdAddr = "http://127.0.0.1:2379;http://127.0.0.1:12379;http://127.0.0.1:22379";

struct ServiceAddrCache{
    std::unordered_map<std::string ,std::unordered_map<std::string,std::string>> m_ServiceAddrs;
    std::shared_mutex m_Mtx;
};


struct WatchersCache{
    //前缀
    std::unordered_map<std::string,std::unique_ptr<etcd::Watcher>> m_Watchers;
    std::shared_mutex m_Mtx;
};

class EtcdDiscoveryCenter;
class RegisterInterface;

class GlobalConf
{
public:
    static void Watch_cb(etcd::Response resp);
    static std::unique_ptr<EtcdDiscoveryCenter> g_EtcdDiscoveryCenter;
    static std::unique_ptr<RegisterInterface> g_RegistInterface;
};


class EtcdDiscoveryCenter
{
public:
    using uptr = std::unique_ptr<EtcdDiscoveryCenter>;
    EtcdDiscoveryCenter(std::string EtcdAddr,std::string Scheme,std::string ServiceName)
        :m_Scheme(Scheme),m_ServiceName(ServiceName)
    {
        m_Client = std::make_unique<etcd::Client>(EtcdAddr);
    }

    void FirstLoadAndWatch()
    {
        m_Client->ls(GetPrefix(m_Scheme,m_ServiceName)).then([this](etcd::Response resp){
            auto keys = resp.keys();
            for(int i = 0 ; i < keys.size() ; i ++){
                auto parts = galay::StringUtil::Spilt_With_Char(keys[i],'/');
                spdlog::info("{} {} : AddserviceAddr paragment: {} {} {} {}",__FILE__,__LINE__,parts[1],parts[2],parts[3],resp.values().at(i).as_string());
                this->AddServiceAddr(parts[1],parts[2],parts[3],resp.values().at(i).as_string());
            }
        }).wait();
        std::unique_ptr<etcd::Watcher> watcher = std::make_unique<etcd::Watcher>(g_EtcdAddr,GetPrefix(m_Scheme,m_ServiceName),GlobalConf::Watch_cb,true);
        m_Watchers.m_Watchers.insert({GetPrefix(m_Scheme,m_ServiceName),std::move(watcher)});
    }

    std::list<std::string> discovery()
    {
        std::list<std::string> addrs;
        m_ServiceAddrs.m_Mtx.lock_shared();
        auto mp = m_ServiceAddrs.m_ServiceAddrs[GetPrefix(m_Scheme,m_ServiceName)];
        m_ServiceAddrs.m_Mtx.unlock_shared();
        for(const auto&[node,addr] : mp){
            addrs.push_back(addr);
        }
        return addrs;
    }

    void AddServiceAddr(std::string Scheme, std::string ServiceName , std::string NodeName , std::string Addr)
    {
        std::string prefix = GetPrefix(Scheme,ServiceName);
        m_ServiceAddrs.m_Mtx.lock();
        m_ServiceAddrs.m_ServiceAddrs[prefix][NodeName] = Addr;
        m_ServiceAddrs.m_Mtx.unlock();

    }

    void RemoveServiceAddr(std::string Scheme, std::string ServiceName, std::string NodeName){
        std::string prefix = GetPrefix(Scheme,ServiceName);
        m_ServiceAddrs.m_Mtx.lock();
        auto it = m_ServiceAddrs.m_ServiceAddrs.find(prefix);
        if(it->second.find(NodeName) != it->second.end()) it->second.erase(NodeName);
        m_ServiceAddrs.m_Mtx.unlock();
    }

    void ModServiceAddr(std::string Scheme, std::string ServiceName , std::string NodeName , std::string Addr){
        std::string prefix = GetPrefix(Scheme,ServiceName);
        m_ServiceAddrs.m_Mtx.lock();
        m_ServiceAddrs.m_ServiceAddrs[prefix][NodeName] = Addr;
        m_ServiceAddrs.m_Mtx.unlock();
    }


private:
    std::string GetPrefix(std::string Scheme,std::string ServiceName)
    {
        std::string res = "/";
        res = res + Scheme + "/" + ServiceName;
        return res;
    }


private:
    std::unique_ptr<etcd::Client> m_Client;
    WatchersCache m_Watchers{};
    ServiceAddrCache m_ServiceAddrs{};
    std::string m_Scheme;
    std::string m_ServiceName;
};

class RegisterInterface{
public:
    using uptr = std::unique_ptr<RegisterInterface>;
    RegisterInterface(std::shared_ptr<grpc::Channel> channel):
        m_stub(Register::RegisterService::NewStub(channel)){}

    void Register()
    {
        grpc::ClientContext ctx;
        Register::RegisterRequest req;
        req.set_username("gong");
        req.set_password("123456");
        Register::RegisterResponse resp;
        m_stub->Register(&ctx,req,&resp);

    }

    void ReConnect()
    {
        m_stub.reset();
        auto ServerAddrs = GlobalConf::g_EtcdDiscoveryCenter->discovery();
        if(ServerAddrs.empty()) exit(0);
        m_stub = Register::RegisterService::NewStub(grpc::CreateChannel(*ServerAddrs.begin(),grpc::InsecureChannelCredentials()));
    }

private:
    std::unique_ptr<Register::RegisterService::Stub> m_stub;
};

void GlobalConf::Watch_cb(etcd::Response resp)
{
    spdlog::info("{} {} Watch_cb Response action: {}", __FILE__, __LINE__, resp.action());
    for (const auto &event : resp.events())
    {
        std::string key = event.kv().key();
        auto parts = galay::StringUtil::Spilt_With_Char(key, '/');
        if (resp.action().compare("set") == 0)
        {
            spdlog::info("{} {} Watch_cb ModServiceAddr paragment: {} {} {} {}", __FILE__, __LINE__, parts[1], parts[2], parts[3], event.kv().as_string());
            g_EtcdDiscoveryCenter->ModServiceAddr(parts[1], parts[2], parts[3], event.kv().as_string());
            g_RegistInterface->ReConnect();
        }
        else if (resp.action().compare("create") == 0)
        {
            spdlog::info("{} {} Watch_cb AddServiceAddr paragment: {} {} {} {}", __FILE__, __LINE__, parts[1], parts[2], parts[3], event.kv().as_string());
            g_EtcdDiscoveryCenter->AddServiceAddr(parts[1], parts[2], parts[3], event.kv().as_string());
        }
        else if (resp.action().compare("delete") == 0)
        {
            spdlog::info("{} {} Watch_cb RemoveServiceAddr paragment: {} {} {}", __FILE__, __LINE__, parts[1], parts[2], parts[3]);
            g_EtcdDiscoveryCenter->RemoveServiceAddr(parts[1], parts[2], parts[3]);
            g_RegistInterface->ReConnect();
        }
    }
}


EtcdDiscoveryCenter::uptr GlobalConf::g_EtcdDiscoveryCenter = std::make_unique<EtcdDiscoveryCenter>(g_EtcdAddr,"myscheme","regist");
RegisterInterface::uptr GlobalConf::g_RegistInterface = nullptr;

int main(int argc,char*argv[])
{
    //获取服务ip
    GlobalConf::g_EtcdDiscoveryCenter->FirstLoadAndWatch();
    auto ServerAddrs = GlobalConf::g_EtcdDiscoveryCenter->discovery();
    GlobalConf::g_RegistInterface = std::make_unique<RegisterInterface>(grpc::CreateChannel(*ServerAddrs.begin(),grpc::InsecureChannelCredentials()));
    GlobalConf::g_RegistInterface->Register();
    getchar();
    GlobalConf::g_RegistInterface->Register();
    getchar();
    GlobalConf::g_RegistInterface->Register();
    getchar();
    return 0;
}
