cmake_minimum_required(VERSION 3.0)
project(yaml_cpp_interface)

set(CMAKE_CXX_STANDARD 14)

add_definitions(-DROOT_DIR=\"${CMAKE_CURRENT_SOURCE_DIR}/\")
# set to debug
#set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_CXX_FLAGS "-O -Wall -g")


find_package(yaml-cpp REQUIRED)

add_executable(yaml_cpp_interface main.cpp)
target_link_libraries(yaml_cpp_interface
    yaml-cpp
)
