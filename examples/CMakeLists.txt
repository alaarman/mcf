

cmake_minimum_required(VERSION 2.7)

include_directories(../src)

add_custom_target(spins_examples)
add_custom_target(dve_examples)
add_custom_target(all_examples)

# Make all SpinS files
file( GLOB SPINS_MODELS *.spins.c )
foreach( sourcefile ${SPINS_MODELS} )
   
    get_filename_component(lname "${sourcefile}" NAME_WE)    
    set(lname "${lname}.pr")
#    message("${lname} ${sourcefile}\n")
    
    add_library(${lname} EXCLUDE_FROM_ALL SHARED ${sourcefile} ../src/loader/prom-dl.h ../src/loader/prom-dl.c)
    set_target_properties(${lname} PROPERTIES LINKER_LANGUAGE C)
    set_target_properties(${lname} PROPERTIES PREFIX "")
    target_link_libraries(${lname} pins)

    target_compile_options(${lname} PRIVATE "-Wno-unused-variable")
    target_compile_options(${lname} PRIVATE "-Wno-missing-braces")
    target_compile_options(${lname} PRIVATE "-Wno-unused-but-set-variable")
    target_compile_options(${lname} PRIVATE "-Wno-unused-function")
    target_compile_options(${lname} PRIVATE "-Wno-address")
    
    add_dependencies(spins_examples ${lname})
endforeach( sourcefile ${SPINS_MODELS} )


# Make all SpinS files
file( GLOB DVE_MODELS *.dve.cpp )
foreach( sourcefile ${DVE_MODELS} )
   
    get_filename_component(lname "${sourcefile}" NAME)
    string(REGEX REPLACE "\\.[^.]*$" "" lname ${lname})
    
    add_library(${lname} EXCLUDE_FROM_ALL SHARED ${sourcefile} ../src/loader/dve-dl.h ../src/loader/dve-dl.c)
#    set_target_properties(${lname} PROPERTIES LINKER_LANGUAGE C)
    set_target_properties(${lname} PROPERTIES PREFIX "")
    target_link_libraries(${lname} pins)

    target_compile_options(${lname} PRIVATE "-Wno-unused-variable")
    target_compile_options(${lname} PRIVATE "-Wno-missing-braces")
    target_compile_options(${lname} PRIVATE "-Wno-unused-but-set-variable")
    target_compile_options(${lname} PRIVATE "-Wno-unused-function")
    target_compile_options(${lname} PRIVATE "-Wno-address")
    target_compile_options(${lname} PRIVATE "-Wno-parentheses")
    
    add_dependencies(dve_examples ${lname})
endforeach( sourcefile ${DVE_MODELS} )

add_subdirectory(peterson)

add_dependencies(all_examples dve_examples spins_examples peterson)


