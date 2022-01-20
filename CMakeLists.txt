cmake_minimum_required(VERSION 3.16)
project(ContainerNAlgorithm)

set(CMAKE_CXX_STANDARD 11)

add_executable(ContainerNAlgorithm main.cpp container/LinkedList.cpp container/LinkedList.h container/ArrayList.cpp container/ArrayList.h)