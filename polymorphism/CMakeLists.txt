cmake_minimum_required(VERSION 3.14)
project(polymorphism LANGUAGES CXX)

get_directory_property(IS_SUBPROJECT PARENT_DIRECTORY)

add_subdirectory(ver1)
add_subdirectory(ver2)
