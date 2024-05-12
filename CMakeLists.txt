cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 20)

project(glfw)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ext/header)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/ext/lib)

file(GLOB_RECURSE SOURCE_FILE *.cc)

add_executable(glfw ${SOURCE_FILE})

target_link_libraries(glfw glfw3)
