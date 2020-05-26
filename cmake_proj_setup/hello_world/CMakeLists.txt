project (hello_world)
 
set (PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set (PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
 
set(HELLO_WORLD_SRCS
${PROJECT_SOURCE_DIR}/main.cpp  
)

set(EXECUTABLE_OUTPUT_PATH ${EXECUTABLE_OUTPUT_PATH}/${PROJECT_NAME})
include_directories("${PROJECT_BINARY_DIR}")
add_executable(hello_world ${HELLO_WORLD_SRCS})
include_directories("${PROJECT_INCLUDE_DIR}")