cmake_minimum_required(VERSION 3.31)
project(container)

set(CMAKE_CXX_STANDARD 17)

add_executable(container main.cpp
        Vector_use/Vector_use.cpp
        Vector_use/Vector_use.h)
