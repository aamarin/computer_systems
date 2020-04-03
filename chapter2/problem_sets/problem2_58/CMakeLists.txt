include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/chapter2/src)
add_executable(problem2_58.exe problem2_58.c)
target_link_libraries(problem2_58.exe PUBLIC chapter2lib)
