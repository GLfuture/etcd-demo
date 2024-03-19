#include <etcd/Watcher.hpp>
#include <etcd/Client.hpp>
#include <etcd/v3/Transaction.hpp>
#include <etcd/KeepAlive.hpp>

void Watcher_cb(etcd::Response resp)
{
    std::cout << resp.action() << '\n';
    for(auto event: resp.events()){
        if(event.has_kv()){
            std::cout << " " << event.kv().key() << '\n';
        }
    }
}

int main()
{
    std::string etcd_addr = "http://127.0.0.1:2379,http://127.0.0.1:12379,http://127.0.0.1:22379";
    //etcd::Watcher watcher(etcd_addr,"/api/regist",Watcher_cb,true);
    // std::string prekey = "/api/login";
    // etcd::Watcher watcher(etcd_addr,prekey,Watcher_cb,true);
    etcd::Client client(etcd_addr);
    // std::cout << "value:" <<  client.get("/it/is").get().error_code() <<" : " << client.get("/it/is").get().error_message() << " " << client.get("/it/is").get().value().as_string() <<'\n';
    // auto leaseRes = client.leasekeepalive(30);
    // client.put("/my/test/key1","1",leaseRes.get()->Lease()).wait();
    // client.put("/my/test/key2","2",leaseRes.get()->Lease()).wait();
    // client.put("/my/test/key3","1").wait();
    // client.ls("/my/test").then([](etcd::Response resp){
    //     auto keys = resp.keys();
    //     for(int i = 0 ; i < keys.size() ; i ++){
    //         std::cout << keys[i] << " " << resp.values().at(i).as_string() << '\n';
    //     }
    // });
    // client.lock("/api/login/mutex",10);
    // etcdv3::Transaction txn;
    // etcdv3::CompareResult result = etcdv3::CompareResult::EQUAL;
    // txn.add_compare_mod("/my/test/key1",result,0);
    // txn.add_success_put("/my/test/key4","success");
    // txn.add_failure_put("/my/test/key4","fail");
    // txn.add_compare_version("/my/test2",0);
    // txn.add_compare_create("/my/test2",result,0);
    // txn.add_success_put("/my/test/key5","success");
    // txn.add_failure_put("/my/test/key5","fail");
    // txn.add_compare_value("/my/test/key1",result,"value");
    // txn.add_compare_create("/my/test/key4", result ,0);
    // txn.add_success_put("/my/test/f","success");
    // txn.add_failure_put("/my/test/key5","fail");
    // client.txn(txn).then([](etcd::Response resp){
    //     std::cout << resp.value().as_string() <<'\n';
    // });

    // client.rmdir("/my/test/key", true).wait();
    client.ls("/myscheme/regist").then([](etcd::Response resp)
    {
        auto keys = resp.keys();
        for(int i = 0 ; i < keys.size() ; i ++){
            std::cout << keys[i] << " " << resp.values().at(i).as_string() << '\n';
        } 
        });

    getchar();
    return 0;
}