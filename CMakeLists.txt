cmake_minimum_required(VERSION 3.0)

project(lawn-mower-simulator)

add_executable(lawn-mower-simulator main.cpp)

install(TARGETS lawn-mower-simulator RUNTIME DESTINATION bin)
