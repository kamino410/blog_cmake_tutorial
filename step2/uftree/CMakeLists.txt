cmake_minimum_required(VERSION 3.1)
project(mylib
    VERSION 1.0.0
    DESCRIPTION "Union-Find tree library"
    LANGUAGES CXX)
add_library(uftree STATIC ./src/uftree.cpp)
target_compile_features(uftree PRIVATE cxx_std_11)
target_include_directories(uftree INTERFACE ./include)
set_target_properties(uftree
    PROPERTIES
    VERSION ${mylib_VERSION})

