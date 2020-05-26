project(cpp20 VERSION 0.1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

set(EXECUTABLE_OUTPUT_PATH ${EXECUTABLE_OUTPUT_PATH}/${PROJECT_NAME}/build)

add_subdirectory(bitfields)
add_subdirectory(lambda)
add_subdirectory(latches)

