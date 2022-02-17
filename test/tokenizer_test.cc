#include <gtest/gtest.h>

// write assertions
TEST(TOKENIZERTEST, BasicAssertions)
{
  EXPECT_STRNE("hello", "world");
}