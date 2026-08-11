cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)

project(fps120)

find_package(Geode REQUIRED)

add_geode_mod(
    fps120
    SOURCES src/main.cpp
)
