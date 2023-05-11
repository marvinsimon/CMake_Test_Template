cmake_minimum_required(VERSION 3.25)
project(Template)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set a special compiler here
set(CMAKE_TOOLCHAIN_FILE)

# Setup output directories.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

# Add the source directories CMake
add_subdirectory(src)

# Define a variable which can be set by the user
option(TEST_ENABLE "Enable the testing of the Feature (default ON)" ON)

# Only build it when it is enabled
if (TEST_ENABLE)
    include(CTest)
    add_subdirectory(test)
endif ()
