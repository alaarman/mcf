cmake_minimum_required(VERSION 2.7)

#project(sylvan VERSION 1.4.0)

set(PROJECT_DESCRIPTION "Sylvan, a parallel decision diagram library")
set(PROJECT_URL "https://github.com/trolando/sylvan")

enable_language(C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(.)

set(CMAKE_C_FLAGS "-O2 -Wextra -Wall -Werror -fno-strict-aliasing ${CMAKE_C_FLAGS}")
set(CMAKE_CXX_FLAGS "-O2 -Wextra -Wall -Werror -fno-strict-aliasing -Wno-deprecated ${CMAKE_CXX_FLAGS}")

set(SOURCES
    lace.c
    sha2.c
    sylvan_bdd.c
    sylvan_cache.c
    sylvan_common.c
    sylvan_gmp.c
    sylvan_ldd.c
    sylvan_mt.c
    sylvan_mtbdd.c
    sylvan_obj.cpp
    sylvan_refs.c
    sylvan_sl.c
    sylvan_stats.c
    sylvan_table.c
)

set(HEADERS
    lace.h
    sylvan.h
    sylvan_bdd.h
    sylvan_cache.h
    sylvan_config.h
    sylvan_common.h
    sylvan_gmp.h
    sylvan_int.h
    sylvan_ldd.h
    sylvan_ldd_int.h
    sylvan_mt.h
    sylvan_mtbdd.h
    sylvan_mtbdd_int.h
    sylvan_obj.hpp
    sylvan_stats.h
    sylvan_table.h
    sylvan_tls.h
)

option(BUILD_SHARED_LIBS "Enable/disable creation of shared libraries" ON)
option(BUILD_STATIC_LIBS "Enable/disable creation of static libraries" ON)

add_library(sylvan ${SOURCES})

find_package(GMP REQUIRED)

target_link_libraries(sylvan m pthread ${GMP_LIBRARIES})

if(UNIX AND NOT APPLE)
    target_link_libraries(sylvan rt)
endif()

