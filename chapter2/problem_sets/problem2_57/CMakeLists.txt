include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/chapter2/src)
add_executable(problem2_57 problem2_57.c)
target_link_libraries(problem2_57 PUBLIC chapter2lib)
