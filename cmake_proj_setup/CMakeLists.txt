cmake_minimum_required(VERSION 3.0.0)
project(cmake_proj_setup VERSION 0.1.0)
 
set(EXECUTABLE_OUTPUT_PATH ${EXECUTABLE_OUTPUT_PATH}/${PROJECT_NAME}/build)
add_subdirectory(hello_world)

