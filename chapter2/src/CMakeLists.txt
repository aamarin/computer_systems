add_library(chapter2 STATIC show_bytes.c)
target_include_directories(chapter2 PUBLIC ${PROJECT_SOURCE_DIR}/include)