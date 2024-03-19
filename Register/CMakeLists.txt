project(register)

set(COMMON_SRC_LIST register.grpc.pb.cc register.pb.cc)

add_library(common ${COMMON_SRC_LIST})

add_executable(regist_server register_server.cc)

target_link_libraries(regist_server common ssl crypto ${_REFLECTION} ${_GRPC_GRPCPP} ${_PROTOBUF_LIBPROTOBUF}  etcd-cpp-api cpprest galay-shared)

add_executable(regist_client register_client.cc)

target_link_libraries(regist_client common ssl crypto ${_REFLECTION} ${_GRPC_GRPCPP} ${_PROTOBUF_LIBPROTOBUF}  etcd-cpp-api cpprest galay-shared)
