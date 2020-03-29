include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/src)
add_executable(problem2_55 problem2_55.c)
target_link_libraries(problem2_55 PUBLIC chapter2lib)
