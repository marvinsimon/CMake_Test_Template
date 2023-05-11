cmake_minimum_required(VERSION 3.25)
project(UnitTests)

# Fetch the GTest Suit from Github
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
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
