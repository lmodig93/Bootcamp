cmake_minimum_required(VERSION 3.5.1)
project(shapes)

include_directories(include)
add_executable(shapes src/Shape.cpp src/main.cpp)