cmake_minimum_required(VERSION 3.25)
project(Template_Lib)


# Define the sources for the library
set(SOURCES
        foo.cpp
        )
# Create a library out of the sources
add_library(fooLib STATIC ${SOURCES})

# Specify include directory, for the library so that other files can access the header
target_include_directories(fooLib
        INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
        )