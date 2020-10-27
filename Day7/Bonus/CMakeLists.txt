cmake_minimum_required(VERSION 3.15)

project(p1)

include(FindPCAP.cmake)
link_libraries(${PCAP_LIBRARY})

add_executable(p1 src/main.cpp)