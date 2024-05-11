
project(test_leetcode)
message("Process project test_leetcode")
message("The root directory is ${CMAKE_SOURCE_DIR}")
message("checkpoint: ${CMAKE_SOURCE_DIR}/src/googletest/googletest/include")

set(local_test_targets
    test_0000
    test_2873
)
foreach(test_target ${local_test_targets})
    message(">>> ${test_target}")
    add_executable(${test_target} ${test_target}.cpp)
    target_link_libraries(${test_target}
            PUBLIC gtest
            PUBLIC GTest::gtest_main
    )
    gtest_discover_tests(${test_target})
endforeach ()