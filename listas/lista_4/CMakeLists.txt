cmake_minimum_required(VERSION 3.1)
project(lista_4)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wno-sign-compare -std=c++14")

find_package(xtl REQUIRED)
find_package(xtensor REQUIRED)

add_executable(lista_4 src/main.cpp src/trapezoidal.cpp)

target_link_libraries(lista_4 xtensor)