

add_subdirectory(bignum)
add_subdirectory(util)
add_subdirectory(dm)
add_subdirectory(util-mc)
add_subdirectory(syntax)
add_subdirectory(syntax/andl)
add_subdirectory(pins)
add_subdirectory(vset)

find_package(LibXml2 REQUIRED)


ADD_CUSTOM_TARGET (distclean)

ADD_CUSTOM_COMMAND(
    DEPENDS clean
    COMMENT "distribution clean"
    COMMAND rm
    ARGS    -rf *.dSYM */*.dSYM Makefile */Makefile */CMakeFiles CMakeFiles CMakeCache.txt Makefile */Makefile  */CMakeCache.txt cmake_install.cmake */cmake_install.cmake
    TARGET  distclean
)

include_directories(. ${LIBXML2_INCLUDE_DIR})

# use, i.e. don't skip the full RPATH for the build tree
#SET(CMAKE_SKIP_BUILD_RPATH  FALSE)
#
# when building, don't use the install RPATH already
# (but later on when installing)
#SET(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE) 
#
#SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
#
# add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
#SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
#
#
# the RPATH to be used when installing, but only if it's not a system directory
#LIST(FIND CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES "${CMAKE_INSTALL_PREFIX}/lib" isSystemDir)
#IF("${isSystemDir}" STREQUAL "-1")
#   SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
#ENDIF("${isSystemDir}" STREQUAL "-1")


add_executable(mc
                mc.c
                alg/enum-dfs.c alg/enum-dfs.h
                alg/sym-bfs.c alg/sym-bfs.h
                aux/options.c aux/options.h
                pins2pins/ltl.c pins2pins/ltl.h
                pins2pins/por.c pins2pins/por.h
                pins2pins/process.c pins2pins/process.h
                pins2pins/tr.c pins2pins/tr.h
                loader/dve-pins.c loader/dve-pins.h
                loader/loader.c loader/loader.h
                loader/etf-pins.c loader/etf-pins.h
                loader/pnml-pins.c loader/pnml-pins.h
                loader/prom-pins.c loader/prom-pins.h
                loader/dlopen-pins.c loader/dlopen-pins.h
)

target_compile_definitions(mc ${LIBXML2_DEFINITIONS} PRIVATE)

target_link_libraries(mc pins util-mc vset andl syntax ${LIBXML2_LIBRARIES} pthread ${CMAKE_DL_LIBS}) 
