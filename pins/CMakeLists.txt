include_directories(..)

add_library(pins STATIC
            lts-type.h lts-type.c
            ltsmin-standard.h
            pins-util.h pins-util.c
            pins.h pins.c
            property-semantics.c property-semantics.h
            dlopen-api.h)

target_link_libraries(pins dm util)