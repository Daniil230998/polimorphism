cmake_minimum_required(VERSION 3.14)
project(ver1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(ver1 test1.cpp realisation1.cpp realisation1.hpp ../store.hpp)

target_link_libraries(ver1)
