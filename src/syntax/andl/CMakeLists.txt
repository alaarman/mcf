cmake_minimum_required(VERSION 2.7)

# Flex and lemon
find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)


bison_target(andl-parser andl-parser.y ${CMAKE_CURRENT_BINARY_DIR}/andl-parser.c)

flex_target(andl-lexer andl-lexer.l ${CMAKE_CURRENT_BINARY_DIR}/andl-lexer.c)

add_flex_bison_dependency(andl-lexer andl-parser)


add_library(andl
    ${BISON_andl-parser_OUTPUTS}
    ${FLEX_andl-lexer_OUTPUTS}
)

target_link_libraries(andl util ${CMAKE_DL_LIBS})
