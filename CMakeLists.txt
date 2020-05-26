cmake_minimum_required(VERSION 3.0.0)
project(moderncpp_code_examples VERSION 0.1.0)
 
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
 
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
 
set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
 
include_directories("${PROJECT_INCLUDE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}")
 
add_subdirectory(cmake_proj_setup)
add_subdirectory(cpp20_code_examples)

# set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
