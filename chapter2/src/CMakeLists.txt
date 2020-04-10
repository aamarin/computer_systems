add_library(show_bytes STATIC show_bytes.c)

add_executable(problem2_57.exe problem2_57.c)
target_include_directories(problem2_57.exe PUBLIC ${PROJECT_SOURCE_DIR}/chapter2/include)
target_link_libraries(problem2_57.exe PUBLIC show_bytes)

add_executable(problem2_58.exe problem2_58.c)
target_link_libraries(problem2_58.exe PUBLIC show_bytes)
target_include_directories(problem2_58.exe PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_library(problem2_59 STATIC problem2_59.c)
target_include_directories(problem2_59 PUBLIC ${PROJECT_SOURCE_DIR}/chapter2/include)

add_library(problem2_60 STATIC problem2_60.c)
target_include_directories(problem2_60 PUBLIC ${PROJECT_SOURCE_DIR}/chapter2/include)
