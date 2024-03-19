cmake_minimum_required(VERSION 3.0)

project(etcd)

include(cmake/common.cmake)
find_package(OpenSSL REQUIRED)
#禁止忽略openssl
set(CMAKE_EXE_LINKER_FLAGS -Wl,--no-as-needed)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(proto)
add_subdirectory(server)
add_subdirectory(client)
add_subdirectory(etcd)
add_subdirectory(Register)