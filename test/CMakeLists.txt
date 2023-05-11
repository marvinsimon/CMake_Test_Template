cmake_minimum_required(VERSION 3.25)
project(UnitTests)

# Fetch the GTest Suit from Github
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.13.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


# Define your sources
set(SOURCES
        templateUnit.cpp)

add_executable(UnitTests ${SOURCES})

# Link the GoogleTest Suit and the library to be tested
target_link_libraries(UnitTests PUBLIC fooLib GTest::gtest GTest::gtest_main)

# Include GoogleTest for discovery purposes
include(GoogleTest)
gtest_discover_tests(UnitTests)
