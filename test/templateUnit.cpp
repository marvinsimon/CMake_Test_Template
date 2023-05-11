//
// Created by marvi on 11/05/2023.
//

#include "foo.h"
#include "gtest/gtest.h"

TEST(HelloTest, Basic) {
    std::cout << "Test";
    ASSERT_EQ(36, exponential(6));
}

TEST(HelloTest, failing) {
    FAIL();
}
