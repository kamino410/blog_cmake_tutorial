cmake_minimum_required(VERSION 3.1)

project(subdirectory_sample CXX)
add_subdirectory(./uftree)
add_executable(main_app main.cpp)
target_link_libraries(main_app uftree)

