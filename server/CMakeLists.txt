project(server)
aux_source_directory(. SERVER_SRC_LIST)

add_executable(${PROJECT_NAME} ${SERVER_SRC_LIST})
target_link_libraries(${PROJECT_NAME} proto ssl crypto ${_REFLECTION} ${_GRPC_GRPCPP} ${_PROTOBUF_LIBPROTOBUF}  etcd-cpp-api cpprest)