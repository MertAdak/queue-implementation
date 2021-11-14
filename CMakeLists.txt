cmake_minimum_required(VERSION 3.20)
project(Queue_Implementations)

set(CMAKE_CXX_STANDARD 14)

add_executable(Queue_Implementations main.cpp Queue.cpp Queue.h Node.cpp Node.h)
