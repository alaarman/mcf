

cmake_minimum_required(VERSION 2.7)

include_directories($ENV{HOME}/ltsmin/include)

include_directories(.)
include_directories(..)


add_library(peterson SHARED
            peterson.c peterson.h
            dlopen-impl.c
)
set_target_properties(peterson PROPERTIES PREFIX "")

if(APPLE)
    SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -undefined dynamic_lookup")
endif()

target_link_libraries(peterson)