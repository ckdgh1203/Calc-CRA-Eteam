#include "pch.h"
#include "../calc/calc.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, GetSumTest) {
	Calc calc;
	EXPECT_EQ(10, calc.getSum(7, 3));
}