cmake_minimum_required(VERSION 3.12)
project(p0_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(p0_cpp
        binarySearchTree.cpp
        binarySearchTree.h
        makefile
        P0.cpp)
