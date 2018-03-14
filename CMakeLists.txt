cmake_minimum_required(VERSION 2.7)

set(CMAKE_MACOSX_RPATH 1)
#set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_C_FLAGS_DEBUG     "${CMAKE_C_FLAGS_DEBUG}     -fPIC -Wall -DDEBUG=1 -g -O0")
set(CMAKE_CPP_FLAGS_DEBUG   "${CMAKE_CPP_FLAGS_DEBUG}   -fPIC -Wall -DDEBUG=1 -g -O0")
set(CMAKE_CXX_FLAGS_DEBUG   "${CMAKE_CXX_FLAGS_DEBUG}   -fPIC -Wall -DDEBUG=1 -g -O0")
set(CMAKE_LD_FLAGS_DEBUG    "${CMAKE_LD_FLAGS_DEBUG}    -g")
set(CMAKE_C_FLAGS_RELEASE   "${CMAKE_C_FLAGS_RELEASE}   -fPIC -Wall")
set(CMAKE_CPP_FLAGS_RELEASE "${CMAKE_CPP_FLAGS_RELEASE} -fPIC -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fPIC -Wall")
set(CMAKE_LD_FLAGS_RELEASE  "${CMAKE_LD_FLAGS_RELEASE}")

ADD_CUSTOM_TARGET (distclean @echo cleaning for source distribution)

ADD_CUSTOM_COMMAND(
    DEPENDS clean
    COMMENT "distribution clean"
    COMMAND rm
    ARGS    -rf *.dSYM */*.dSYM Makefile */Makefile */CMakeFiles CMakeFiles CMakeCache.txt */CMakeCache.txt cmake_install.cmake */cmake_install.cmake
    TARGET  distclean
)

include_directories(.)

set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(util)
add_subdirectory(dm)
add_subdirectory(util-mc)
add_subdirectory(pins)
add_subdirectory(peterson)
add_subdirectory(ltl2ba)
#add_subdirectory(ltsmin-lib)
add_subdirectory(sylvan)


add_executable(mc
                mc.c
                alg/enum-dfs.c alg/enum-dfs.h
                pins2pins/por.c pins2pins/por.h
                loader/loader.c loader/loader.h
                loader/dve-pins.c loader/dve-pins.h
                loader/prom-pins.c loader/prom-pins.h
                loader/dlopen-pins.c loader/dlopen-pins.h
)

target_link_libraries(mc pins util-mc pthread ${CMAKE_DL_LIBS})
