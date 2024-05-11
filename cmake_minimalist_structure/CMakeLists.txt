cmake_minimum_required(VERSION 3.25)
project(cpp_lab)

message("CMake top level source dir: ${CMAKE_SOURCE_DIR}")
message("CMake current source dir: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CMake top level project name: ${CMAKE_PROJECT_NAME}")
message("Current project name: ${PROJECT_NAME}")
message("Project source dir: ${PROJECT_SOURCE_DIR}")

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/install)
message("[!!!] CMAKE_INSTALL_PREFIX is ${CMAKE_INSTALL_PREFIX}")

add_subdirectory(src)

# Example of Setting Installation
add_executable(demo src/demo.cpp)
target_link_libraries(demo utils)

include(GNUInstallDirs)
install(TARGETS demo
    EXPORT demo
    RUNTIME
        DESTINATION ${CMAKE_INSTALL_BINDIR}/demo
    LIBRARY
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/demo
    ARCHIVE
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/demo
    PUBLIC_HEADER
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/demo
)

install(EXPORT demo
        FILE DemoConfig.cmake
        DESTINATION cmake/demo
)

# Example of setting tests
include(CTest)
enable_testing()
add_subdirectory(test)