

cmake_minimum_required(VERSION 2.7)

include_directories(..)

add_library(pins STATIC
            lts-type.h lts-type.c
            ltsmin-standard.h
            pins-util.h pins-util.c
            pins.h pins.c
            dlopen-api.h)

target_link_libraries(pins dm util)