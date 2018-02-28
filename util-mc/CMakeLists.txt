

cmake_minimum_required(VERSION 2.7)

include_directories(..)


add_library(util-mc STATIC
        clt_table.c clt_table.h
        dbs-ll.c dbs-ll.h
        hashtable.c hashtable.h
        lb.c lb.h
        treedbs-ll.c treedbs-ll.h
)
