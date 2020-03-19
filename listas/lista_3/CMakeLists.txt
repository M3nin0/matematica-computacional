cmake_minimum_required(VERSION 3.1)
project(lista3)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

find_package(xtl REQUIRED)
find_package(xtensor REQUIRED)

add_executable(lista3 src/main.cpp src/LagrangeInterpolator.cpp)

target_link_libraries(lista3 xtensor)
