cmake_minimum_required(VERSION 3.25)
project(FPS120Mod)

set(CMAKE_CXX_STANDARD 20)

if(DEFINED ENV{GEODE_SDK})
    list(APPEND CMAKE_PREFIX_PATH "$ENV{GEODE_SDK}")
endif()

find_package(Geode REQUIRED)

add_geode_mod(
    fps120
    SOURCES src/main.cpp
)
