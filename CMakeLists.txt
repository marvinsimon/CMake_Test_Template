cmake_minimum_required(VERSION 3.25)
project(Template)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Setup output directories.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)


add_subdirectory(src)

option(TEST_ENABLE "Enable the testing of the Feature (default ON)" ON)


if (TEST_ENABLE)
    add_subdirectory(test)
endif ()
