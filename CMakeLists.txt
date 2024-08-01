cmake_minimum_required(VERSION 3.28)
project(examples)

set(CMAKE_CXX_STANDARD 23)

add_executable(examples main.cpp
        newFuncs.cpp
        newFuncs.h
)
