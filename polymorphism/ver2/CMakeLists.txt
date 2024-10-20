cmake_minimum_required(VERSION 3.14)
project(ver2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(ver2 test2.cpp realisation2.cpp realisation2.hpp ../store.hpp)

target_link_libraries(ver2)
