
set(CMAKE_CPP_FLAGS_DEBUG   "${CMAKE_CPP_FLAGS_DEBUG}   -DNXT")
set(CMAKE_CPP_FLAGS_RELEASE "${CMAKE_CPP_FLAGS_RELEASE} -DNXT")


add_library(buchi STATIC
			parse.c
			lex.c
			trans.c
			buchi.c
			set.c
			mem.c
			rewrt.c
			cache.c
			alternating.c
			generalized.c
			util.c
			ltl2ba.h
)

add_executable(ltl2ba
                main.c ltl2ba.h
)

target_link_libraries(ltl2ba buchi)

