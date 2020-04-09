add_executable(test_problem2_59.exe test_problem2_59.c)
target_link_libraries(test_problem2_59.exe PUBLIC problem2_59 unity)
add_test(NAME test_problem2_59 COMMAND test_problem2_59.exe)