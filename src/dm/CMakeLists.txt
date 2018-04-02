

cmake_minimum_required(VERSION 2.7)

include_directories(..)

#set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDMDEBUG")

add_library(dm STATIC
            dm.c dm.h
            bitvector.c bitvector.h)

target_link_libraries(dm util)