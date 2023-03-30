// test.cpp
#include <stdio.h>

#include <fmt/core.h>
#include <gtest/gtest.h>

template <typename T>
T sum(T a, T b)
{
    return a + b;
}

TEST(SumTest, WorksOnIntegers) {
  EXPECT_EQ(sum(5, 8), 13);
  EXPECT_EQ(sum(0, 0), 0);
}

TEST(SumTest, WorksOnDouble) {
  EXPECT_EQ(sum(5.0, 8.5), 13.5);
  EXPECT_EQ(sum(0.0, 0.0), 0.0);
}
