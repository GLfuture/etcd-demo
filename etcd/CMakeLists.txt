project(etcd)

set(SRC_LIST main.cc)

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME}  etcd-cpp-api cpprest)