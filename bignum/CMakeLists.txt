

cmake_minimum_required(VERSION 2.7)

include_directories(..)


#find_package(GMP QUIET)
#target_link_libraries(bignum gmp libgmp)

add_library(bignum STATIC
        bignum.h  bignum-ll.c 
)

#bignum-gmp.c  
#  bignum-tommath.c  -ltommath
