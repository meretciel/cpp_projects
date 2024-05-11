cmake_minimum_required(VERSION 3.22)  # CMake version check
project(leetcode)                     # Create project "simple_example"
set(CMAKE_CXX_STANDARD 17)            # Enable c++14 standard
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message("Root directory: ${CMAKE_ROOT}")
message("[${CMAKE_PROJECT_NAME}] Project source directory: ${PROJECT_SOURCE_DIR}")
message("[${CMAKE_PROJECT_NAME}] Project binary directory: ${PROJECT_BINARY_DIR}")
message("[${CMAKE_PROJECT_NAME}] Project version: ${PROJECT_VERSION}")

#include_directories(src/solution_2873)
add_subdirectory(src/googletest)
add_subdirectory(src/solution_2873)

#include_directories(src/googletest/googletest/include)

add_executable(leetcode src/main.cpp)
target_link_libraries(leetcode PRIVATE solution_2873)
target_link_libraries(leetcode PRIVATE gmock)
target_link_libraries(leetcode PRIVATE gtest)


# Configure tests
enable_testing()
include(GoogleTest)
add_subdirectory(test)





