

cmake_minimum_required(VERSION 2.7)

include_directories(.)
include_directories(..)


add_library(peterson SHARED
            peterson.c peterson.h
            dlopen-impl.c
)

target_link_libraries(peterson pins)