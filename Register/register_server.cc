#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include "register.grpc.pb.h"
#include <etcd/Client.hpp>
#include <etcd/KeepAlive.hpp>

std::string ServiceAddr = "127.0.0.1:";
std::string EtcdAddr = "http://127.0.0.1:2379;http://127.0.0.1:12379;http://127.0.0.1:22379";
etcd::Client client(EtcdAddr);

class Etcd_Regist{
public:
    using uptr = std::unique_ptr<Etcd_Regist>;
    void Regist(std::string Scheme,std::string ServiceName , std::string NodeName,std::string ServiceAddr){
        std::string key = "/";
        key = key + Scheme + '/' + ServiceName + '/' + NodeName;
        if(CheckNotExist(key)){
            m_keepalive = client.leasekeepalive(10).get();
            int64_t leaseid = m_keepalive->Lease();
            client.put(key,ServiceAddr,leaseid).wait();
            std::cout << client.get(key).get().value().as_string() <<'\n';
            printf("%lx\n",leaseid);
        }
    }

private:
    bool CheckNotExist(const std::string& key)
    {
        if(!client.get(key).get().value().as_string().empty()) return false;
        return true;
    }
private:
    std::shared_ptr<etcd::KeepAlive> m_keepalive;
};


class RegisterService: public Register::RegisterService::Service
{
public:
    virtual ::grpc::Status Register(::grpc::ServerContext* context, 
                        const ::Register::RegisterRequest* request,
                             ::Register::RegisterResponse* response) override
    {
        std::cout << "username: " << request->username() << '\n';
        std::cout << "password: " << request->password() << '\n';
        return grpc::Status::OK;
    } 
};

int main(int argc,char* argv[])
{
    if(argc != 3) {
        printf("%s [port] [nodename]\n",argv[0]);
        exit(0);
    }
    RegisterService service;
    grpc::ServerBuilder builder;
    std::string ListenAddr = "0.0.0.0:";
    ListenAddr += argv[1];
    ServiceAddr += argv[1];
    Etcd_Regist::uptr EtcdClient = std::make_unique<Etcd_Regist>();
    EtcdClient->Regist("myscheme","regist",argv[2],ServiceAddr);
    builder.AddListeningPort(ListenAddr,grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    server->Wait();
    return 0;
}