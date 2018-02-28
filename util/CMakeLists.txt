

cmake_minimum_required(VERSION 2.7)

include_directories(..)


add_library(util STATIC
        chunk_support.h chunk_support.c
        chunk_table_factory.h chunk_table_factory.c
        dynamic-array.h dynamic-array.c
        fast_hash.h fast_hash.c
        list.h list.c
        runtime.h runtime.c
        string-map.h string-map.c
        stringindex.h stringindex.c
        tables.h tables.c
        util.h)
