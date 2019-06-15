cmake_minimum_required(VERSION 3.1)

project(findpackage_sample CXX)
find_package(Ceres REQUIRED)
add_executable(main_app main.cpp)
target_link_libraries(main_app ${CERES_LIBRARIES})

