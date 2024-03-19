#include "../proto/echo.grpc.pb.h"
#include<grpcpp/ext/proto_server_reflection_plugin.h>
#include<grpcpp/grpcpp.h>
#include<grpcpp/health_check_service_interface.h>

int main()
{
    std::string server_addr = "0.0.0.0:8787";
    std::unique_ptr<echo::Echo::Stub> stub = echo::Echo::NewStub(grpc::CreateChannel(server_addr,grpc::InsecureChannelCredentials()));
    echo::EchoRequest req;
    echo::EchoResponse resp;
    echo::EchoLockResponse lresp;
    grpc::ClientContext ctx;
    // if(stub->UnaryEcho(&ctx,req,&resp).ok()){
    //     std::cout << resp.message() << '\n';
    // }
    if(stub->UnaryLock(&ctx,req,&lresp).ok()){
        std::cout << lresp.message() << '\n';
    }
    getchar();
    return 0;
}