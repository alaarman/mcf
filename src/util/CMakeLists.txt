

cmake_minimum_required(VERSION 2.7)

include_directories(..)


add_library(util STATIC
        balloc.c balloc.h
        chunk_support.h chunk_support.c
        chunk_table_factory.h chunk_table_factory.c
        dir_ops.c dir_ops.h
        dfs-stack.c dfs-stack.h
        dynamic-array.h dynamic-array.c
        fast_hash.h fast_hash.c
        is-balloc.c is-balloc.h
        list.h list.c
        MurmurHash3.h MurmurHash3.c
        runtime.h runtime.c
        simplemap.h simplemap.c
        string-map.h string-map.c
        stringindex.h stringindex.c
        sort_r.h
        tables.h tables.c
        treedbs.h treedbs.c
        util.h
        unix.h
        io/user.h
        io/types.h
    io/hre_archive.c
    io/archive.h 
    io/arch_object.h
    io/hre_archive_dir.c
    io/hre_client_server.c
    io/client-server.h
    io/hre_fifo.c
    io/fifo.h
    io/hre_gcf_common.c
    io/gcf_common.h
    io/hre_gcf_read.c
    io/hre_gcf_write.c
    io/hre_gzstream.c
    io/hre_raf.c
    io/raf.h
    io/raf_object.h
    io/hre_stream.c
    io/stream.h
    io/stream_object.h
    io/hre_stream_buffer.c
    io/hre_stream_diff32.c
    io/hre_stream_fd.c
    io/hre_stream_mem.c
    io/hre_stream_rle32.c
    io/hre_struct_io.c
    io/struct_io.h
    io/hre_zip_io.c
        )

target_link_libraries(util ${LIBZIP_LIBRARY})