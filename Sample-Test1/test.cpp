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

TEST(TestCaseName, GetSumTest2) {
	Calc calc;
	EXPECT_EQ(15, calc.getSum(17, -2));
}

TEST(TestCaseName, GetSumTest3) {
	Calc calc;
	EXPECT_EQ(-5, calc.getSum(-1, -4));
}

TEST(calc, getMinusTest) {
	calc calc;

	EXPECT_EQ(calc.getMinus(0, 0), 0);
	EXPECT_EQ(calc.getMinus(2, 1), 1);
	EXPECT_EQ(calc.getMinus(4, 2), 2);
}

TEST(calc, getGopTest) {
	calc calc;

	EXPECT_EQ(calc.getGop(1, 2), 2);
}
