add_executable(problem2_57.exe problem2_57.c)
target_include_directories(problem2_57.exe PUBLIC ${PROJECT_SOURCE_DIR}/chapter2/include)
target_link_libraries(problem2_57.exe PUBLIC show_bytes)
