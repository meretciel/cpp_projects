cmake_minimum_required(VERSION 3.25)
project(test_utils)

add_executable(TestStringUtils TestStringUtils.cpp)
target_link_libraries(TestStringUtils utils)
add_test(NAME TestStringUtils.test1 COMMAND TestStringUtils test1)