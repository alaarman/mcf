

cmake_minimum_required(VERSION 2.7)


include_directories(../../third-party/sylvan ..)

add_library(vset STATIC
        vector_set.c vector_set.h vdom_object.h
        vset_listdd.c
        vset_listdd64.c
        vset_lddmc.c
        vset_sylvan.c
)


target_link_libraries(vset sylvan bignum)

#libvset_la_SOURCES  += vset_buddy.c
#libvset_la_SOURCES  += vset_atermdd.c
#libvset_la_LIBADD   += -lATerm
#libvset_la_SOURCES  += vset_ddd.cpp
#nodist_EXTRA_libvset_la_SOURCES = automake-force-linker.cxx

