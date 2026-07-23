#include <gtest/gtest.h>

#include "atlas_common/hello.hpp"


TEST(HelloTest, ReturnsWelcomeMessage)
{
    EXPECT_EQ(
        atlas::common::Hello::message(),
        "Welcome to Project Atlas!"
    );
}