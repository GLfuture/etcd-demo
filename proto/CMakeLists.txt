project(echo_rpc)
set(SRC_LIST echo.grpc.pb.h echo.pb.h echo.grpc.pb.cc echo.pb.cc )
add_library(proto ${SRC_LIST})
target_link_libraries(proto ${_REFLECTION} ${_GRPC_GRPCPP} ${_PROTOBUF_LIBPROTOBUF} ssl crypto )