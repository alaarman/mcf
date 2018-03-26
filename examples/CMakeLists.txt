

cmake_minimum_required(VERSION 2.7)


include_directories(..)

# Make all SpinS files
file( GLOB SPINS_MODELS *.spins.c )
foreach( sourcefile ${SPINS_MODELS} )
   
    get_filename_component(lname "${sourcefile}" NAME_WE)    
    set(lname "${lname}.pr")
#    message("${lname} ${sourcefile}\n")
    
    add_library(${lname} SHARED ${sourcefile} ../loader/prom-dl.h ../loader/prom-dl.c)
    set_target_properties(${lname} PROPERTIES LINKER_LANGUAGE C)
    set_target_properties(${lname} PROPERTIES PREFIX "")
    target_link_libraries(${lname} pins)

    target_compile_options(${lname} PRIVATE "-Wno-unused-variable")
    target_compile_options(${lname} PRIVATE "-Wno-missing-braces")
    target_compile_options(${lname} PRIVATE "-Wno-unused-but-set-variable")
    target_compile_options(${lname} PRIVATE "-Wno-unused-function")
    target_compile_options(${lname} PRIVATE "-Wno-address")
    
endforeach( sourcefile ${SPINS_MODELS} )


# Make all SpinS files
file( GLOB DVE_MODELS *.dve.cpp )
foreach( sourcefile ${DVE_MODELS} )
   
    get_filename_component(lname "${sourcefile}" NAME)
    string(REGEX MATCH "^(.*)\\.[^.]*$" lname ${lname})
#    message("${lname} ${sourcefile}\n")
    
    add_library(${lname} SHARED ${sourcefile} ../loader/dve-dl.h ../loader/dve-dl.c)
#    set_target_properties(${lname} PROPERTIES LINKER_LANGUAGE C)
    set_target_properties(${lname} PROPERTIES PREFIX "")
    target_link_libraries(${lname} pins)

    target_compile_options(${lname} PRIVATE "-Wno-unused-variable")
    target_compile_options(${lname} PRIVATE "-Wno-missing-braces")
    target_compile_options(${lname} PRIVATE "-Wno-unused-but-set-variable")
    target_compile_options(${lname} PRIVATE "-Wno-unused-function")
    target_compile_options(${lname} PRIVATE "-Wno-address")
    target_compile_options(${lname} PRIVATE "-Wno-parentheses")
    
endforeach( sourcefile ${DVE_MODELS} )

