add_library(show_bytes STATIC show_bytes.c)

add_library(problem2_59 STATIC problem2_59.c)
target_include_directories(problem2_59 PUBLIC ${PROJECT_SOURCE_DIR}/chapter2/include)

add_library(problem2_60 STATIC problem2_60.c)
target_include_directories(problem2_60 PUBLIC ${PROJECT_SOURCE_DIR}/chapter2/include)
