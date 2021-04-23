#include <gtest/gtest.h>

// write assertions
TEST(HelloTest, BasicAssertions)
{
  EXPECT_STRNE("hello", "world");
}