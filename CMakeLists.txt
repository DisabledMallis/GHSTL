cmake_minimum_required(VERSION 3.20)
project(GHSTL LANGUAGES CXX)

add_library(ghstl INTERFACE)
target_include_directories(ghstl INTERFACE "${CMAKE_CURRENT_LIST_DIR}/include")

add_subdirectory(tests)