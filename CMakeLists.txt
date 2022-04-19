cmake_minimum_required(VERSION 3.1.1)
project(CUtils)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# emit all warnings
if(MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic)
endif()

add_subdirectory(test)

file(GLOB_RECURSE lib_source src/*.c src/*.cpp src/*.cc src/*.c++)
add_library(cutils ${lib_source})
set_target_properties(cutils PROPERTIES LINKER_LANGUAGE C)
