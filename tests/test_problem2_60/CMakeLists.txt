add_executable(test_problem2_60.exe test_problem2_60.c)
target_link_libraries(test_problem2_60.exe PUBLIC problem2_60 unity)
add_test(NAME test_problem2_60 COMMAND test_problem2_60.exe)