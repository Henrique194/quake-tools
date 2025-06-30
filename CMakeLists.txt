cmake_minimum_required(VERSION 3.7.2)
project("Quake Tools" VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 23)

find_package(SDL2 2.26.5 REQUIRED)

add_subdirectory("common")
add_subdirectory("qcc")
