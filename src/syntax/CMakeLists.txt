cmake_minimum_required(VERSION 2.7)

set(LEMON_EXECUTABLE "${PROJECT_SOURCE_DIR}/third-party/lemon/lemon")
set(LEMON_TEMPLATE "${PROJECT_SOURCE_DIR}/third-party/lemon/lempar.c")
# Flex and lemon
find_package(LEMON REQUIRED)
find_package(FLEX REQUIRED)


lemon_target(ltsmin-grammar ltsmin-grammar.lemon ${CMAKE_CURRENT_BINARY_DIR}/ltsmin-grammar.c)

flex_target(ltsmin-lexer ltsmin-lexer.l ${CMAKE_CURRENT_BINARY_DIR}/ltsmin-lexer.c)

add_flex_lemon_dependency(ltsmin-lexer ltsmin-grammar)


lemon_target(mucalc-grammar mucalc-grammar.lemon ${CMAKE_CURRENT_BINARY_DIR}/mucalc-grammar.c)

flex_target(mucalc-lexer mucalc-lexer.l ${CMAKE_CURRENT_BINARY_DIR}/mucalc-lexer.c)

add_flex_lemon_dependency(mucalc-lexer mucalc-grammar)


add_library(syntax
	etf-internal.h
	etf-objects.c etf-objects.h
	etf-parser.c
	etf-util.c etf-util.h
	ltl2ba-lex.c ltl2ba-lex.h
	ltl2ba-lex-helper.c ltl2ba-lex-helper.h

	lts-type.c lts-type.h
	ltsmin-buchi.h
	ltsmin-parse-env.h
	ltsmin-syntax.c ltsmin-syntax.h
    ltsmin-standard.h
	ltsmin-tl.c ltsmin-tl.h
	ltsmin-type-system.c ltsmin-type-system.h
    ${LEMON_ltsmin-grammar_OUTPUTS}
    ${FLEX_ltsmin-lexer_OUTPUTS}
)

add_library(mucalc
	mucalc-parse-env.h
	mucalc-syntax.c mucalc-syntax.h
    ${LEMON_mucalc-grammar_OUTPUTS}
    ${FLEX_mucalc-lexer_OUTPUTS}
)

target_link_libraries(mucalc util z)


#install(FILES lts-type.h ltsmin-standard.h)

set(LTL2BA_FLAGS, "-DNXT -I${top_srcdir}/ltl2ba")
set(CMAKE_CPP_FLAGS_DEBUG   "${CMAKE_CPP_FLAGS_DEBUG}   ${LTL2BA_FLAGS}")
set(CMAKE_CPP_FLAGS_RELEASE "${CMAKE_CPP_FLAGS_RELEASE} ${LTL2BA_FLAGS}")

# spot
#if HAVE_SPOT
#add_sources(syntax ltl2spot.cpp ltl2spot.h)
#set(CMAKE_LD_FLAGS_DEBUG    "${CMAKE_LD_FLAGS_DEBUG}    -lspot")
#set(CMAKE_LD_FLAGS_RELEASE  "${CMAKE_LD_FLAGS_RELEASE}  -lspot")
#endif 

target_link_libraries(syntax dm util buchi z)

add_dependencies(syntax lemon)

add_dependencies(mucalc lemon)
