

cmake_minimum_required(VERSION 2.7)

include_directories(..)


add_library(util-mc STATIC
        clt_table.c clt_table.h
        hashtable.c hashtable.h
        lb.c lb.h
        table-ll.c table-ll.h
        tree-ll.c tree-ll.h
)
