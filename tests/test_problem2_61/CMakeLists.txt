add_executable(test_problem2_61.exe test_problem2_61.c)
target_link_libraries(test_problem2_61.exe PUBLIC problem2_61 unity)
add_test(NAME test_problem2_61 COMMAND test_problem2_61.exe)