cmake_minimum_required(VERSION 2.7)

set(CMAKE_MACOSX_RPATH 1)
#set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_C_FLAGS_DEBUG     "${CMAKE_C_FLAGS_DEBUG}     -Wall -DDEBUG=1 -g -O0")
set(CMAKE_CPP_FLAGS_DEBUG   "${CMAKE_CPP_FLAGS_DEBUG}   -Wall -DDEBUG=1 -g -O0")
set(CMAKE_CXX_FLAGS_DEBUG   "${CMAKE_CXX_FLAGS_DEBUG}   -Wall -DDEBUG=1 -g -O0")
set(CMAKE_LD_FLAGS_DEBUG    "${CMAKE_LD_FLAGS_DEBUG}    -g")
set(CMAKE_C_FLAGS_RELEASE   "${CMAKE_C_FLAGS_RELEASE}   -Wall")
set(CMAKE_CPP_FLAGS_RELEASE "${CMAKE_CPP_FLAGS_RELEASE} -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")
set(CMAKE_LD_FLAGS_RELEASE  "${CMAKE_LD_FLAGS_RELEASE}")


include_directories(.)

set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(util)
add_subdirectory(dm)
add_subdirectory(util-mc)
add_subdirectory(pins)
add_subdirectory(peterson)


add_executable(mc
                mc.cpp
                pins2pins/por.c pins2pins/por.h
                loader/loader.c loader/loader.h
                loader/dve-pins.c loader/dve-pins.h
                loader/prom-pins.c loader/prom-pins.h
                loader/dlopen-pins.c loader/dlopen-pins.h
)

target_link_libraries(mc pins)
