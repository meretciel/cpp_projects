cmake_minimum_required(VERSION 3.25)
project(utils)

add_library(utils STATIC StringUtils.cpp)
target_include_directories(utils PUBLIC "include")