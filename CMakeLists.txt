# vim: set filetype=cmake tabstop=4 shiftwidth=4 expandtab :
cmake_minimum_required(VERSION 3.19)

project(cxxversion_and_stdheaders LANGUAGES CXX)

configure_file(cxxversion.hpp ${PROJECT_NAME}/cxxversion.hpp @ONLY)
configure_file(stdheaders.hpp ${PROJECT_NAME}/stdheaders.hpp @ONLY)
add_executable(${PROJECT_NAME}_test test.cpp)
target_include_directories(${PROJECT_NAME}_test PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
