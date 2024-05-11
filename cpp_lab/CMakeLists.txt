cmake_minimum_required(VERSION 3.22)
project(cpplab_main)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS  OFF)



message("Top level source dir: ${CMAKE_SOURCE_DIR}")
message("Current project dif: ${PROJECT_SOURCE_DIR}")
add_subdirectory(src/build_time_cmd_demo)
add_subdirectory(src/cpp_language)





