include_directories(..)

add_library(pins STATIC
            pins-util.h pins-util.c
            pins.h pins.c
            property-semantics.c property-semantics.h
            dlopen-api.h)

target_link_libraries(pins dm util syntax)