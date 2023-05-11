cmake_minimum_required(VERSION 3.25)
project(Template_Lib)


#define the sources for the library
set(SOURCES
        foo.cpp
        )

add_library(fooLib STATIC ${SOURCES})

target_include_directories(fooLib
        INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
        )