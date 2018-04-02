cmake_minimum_required(VERSION 2.7)

#set(CMAKE_BUILD_TYPE Debug)
project(lins) # VERSION 1.4.0)
set(CMAKE_MACOSX_RPATH 1)

set(CMAKE_C_FLAGS_DEBUG     "${CMAKE_C_FLAGS_DEBUG}     -fPIC -Wall -DHAVE_SYLVAN -DDEBUG=1 -g -O0")
set(CMAKE_CPP_FLAGS_DEBUG   "${CMAKE_CPP_FLAGS_DEBUG}   -fPIC -Wall -DDEBUG=1 -g -O0")
set(CMAKE_CXX_FLAGS_DEBUG   "${CMAKE_CXX_FLAGS_DEBUG}   -fPIC -Wall -DDEBUG=1 -g -O0")
set(CMAKE_LD_FLAGS_DEBUG    "${CMAKE_LD_FLAGS_DEBUG}    -g")
set(CMAKE_C_FLAGS_RELEASE   "${CMAKE_C_FLAGS_RELEASE}   -fPIC -Wall -DHAVE_SYLVAN")
set(CMAKE_CPP_FLAGS_RELEASE "${CMAKE_CPP_FLAGS_RELEASE} -fPIC -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fPIC -Wall")
set(CMAKE_LD_FLAGS_RELEASE  "${CMAKE_LD_FLAGS_RELEASE}")

ADD_CUSTOM_TARGET (distclean)

ADD_CUSTOM_COMMAND(
    DEPENDS clean
    COMMENT "distribution clean"
    COMMAND rm
    ARGS    -rf *.dSYM */*.dSYM Makefile */Makefile */CMakeFiles CMakeFiles CMakeCache.txt Makefile */Makefile  */CMakeCache.txt cmake_install.cmake */cmake_install.cmake
    TARGET  distclean
)

include_directories(.)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

add_subdirectory(bignum)
add_subdirectory(util)
add_subdirectory(andl)
add_subdirectory(dm)
add_subdirectory(util-mc)
add_subdirectory(pins)
add_subdirectory(peterson)
add_subdirectory(ltl2ba)
#add_subdirectory(ltsmin-lib)
add_subdirectory(sylvan)
add_subdirectory(vset)


add_subdirectory(examples)
add_custom_target(examples)
add_dependencies(examples all_examples)

set(RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}")

find_package(LibXml2 REQUIRED)

include_directories(${LIBXML2_INCLUDE_DIR})

add_executable(mc
                mc.c
                alg/enum-dfs.c alg/enum-dfs.h
                alg/sym-bfs.c alg/sym-bfs.h
                pins2pins/por.c pins2pins/por.h
                loader/dve-pins.c loader/dve-pins.h
                loader/loader.c loader/loader.h
                loader/pnml-pins.c loader/pnml-pins.h
                loader/prom-pins.c loader/prom-pins.h
                loader/dlopen-pins.c loader/dlopen-pins.h
)

target_compile_definitions(mc ${LIBXML2_DEFINITIONS} PRIVATE)

target_link_libraries(mc pins util-mc vset andl ${LIBXML2_LIBRARIES} pthread ${CMAKE_DL_LIBS}) 
