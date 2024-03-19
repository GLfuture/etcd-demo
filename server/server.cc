#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include "../proto/echo.grpc.pb.h"
#include <etcd/Client.hpp>
#include <etcd/KeepAlive.hpp>
#include <chrono>
#include <thread>
#include <random>

#define LOCK_MUTEX  0
#define SELECTION   1


std::string saddr = "http://127.0.0.1:2379;http://127.0.0.1:12379;http://127.0.0.1:22379";


class EchoService: public echo::Echo::Service
{
public:
    virtual ::grpc::Status UnaryEcho(::grpc::ServerContext* context, 
                                const ::echo::EchoRequest* request, 
                                    ::echo::EchoResponse* response) override
    {
        etcd::Client client(saddr);
        client.leasegrant(30).then([&](etcd::Response resp){
            //添加数据
            client.put("/api/login/key1","value1",resp.value().lease());
            client.put("/api/login/key2","value2",resp.value().lease());
            client.put("/api/login/key3","value3",resp.value().lease());
            client.put("/api/login/key4","value4",resp.value().lease());

            //查询
            client.get("/api/login");
        });
        
        
        return grpc::Status::OK;
    }

    virtual ::grpc::Status UnaryLock(::grpc::ServerContext* context, 
                                const ::echo::EchoRequest* request, 
                                ::echo::EchoLockResponse* response) override
    {

        etcd::Client client(saddr);
#if LOCK_MUTEX
        client.lock("/api/login/mutex",10).wait();
        srandom(time(nullptr));
        int randID = rand();
        printf("%d  lock success\n",randID);
        std::cout << "start: " << std::chrono::steady_clock::now().time_since_epoch().count() << '\n'; 
        response->set_message("lock success!\n");
        std::this_thread::sleep_for(std::chrono::seconds(50));
        client.unlock("/api/login/mutex").wait();
        printf("%d  lock release\n",randID);
        std::cout << "end: " << std::chrono::steady_clock::now().time_since_epoch().count() << '\n'; 
#elif SELECTION
        auto keepalive = client.leasekeepalive(20);
        std::thread observer_th([&]()
                                {
                                    std::cout << "观察者监视线程启动\n";
                                    auto observer = client.observe("campaign");
                                    observer->WaitOnce();
                                    std::cout << "observe " << client.leader("campaign").get().value().as_string() << " as the leader: "  << std::endl;
                                });
        std::cout << "开始竞选\n";
        auto campaign = client.campaign("campaign", keepalive.get()->Lease() , "XXXX");
        std::this_thread::sleep_for(std::chrono::seconds(30));
        //client.resign("campaign", keepalive.get()->Lease(), "" , resp.value().created_index());
        std::cout << "卸任\n";
        observer_th.join();

#endif
        return grpc::Status::OK;
    }
};



int main()
{
    std::string server_addr = "0.0.0.0:8787";
    grpc::ServerBuilder builder;
    EchoService service;
    builder.AddListeningPort(server_addr,grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    server->Wait();
    return 0;
}