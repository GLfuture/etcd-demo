project(client)
set(CLIENT_LIST client.cc)
add_executable(${PROJECT_NAME} ${CLIENT_LIST})
target_link_libraries(${PROJECT_NAME}  proto ${_REFLECTION} ${_GRPC_GRPCPP} ${_PROTOBUF_LIBPROTOBUF} ssl crypto )