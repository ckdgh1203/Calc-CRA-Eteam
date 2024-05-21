#include "pch.h"
#include "../calc/calc.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
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

TEST(calc, ZegopException) {
	Calc calc;
	EXPECT_THROW(calc.getZegop(46341), invalid_argument);
}

TEST(calc, ZegopResultForZero) {
	Calc calc;
	EXPECT_EQ(calc.getZegop(0), 0);
}

TEST(calc, ZegopResultForNormalInput) {
	Calc calc;
	int input = 777;
	int expected = (input) * (input);
	EXPECT_EQ(calc.getZegop(input), expected);
}