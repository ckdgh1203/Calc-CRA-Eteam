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

TEST(TestCaseName, DivideTest) {
	Calc calc{};
	EXPECT_EQ(10, calc.getDivide(10, 1));
}

TEST(TestCaseName, DivideByZeroTest) {
	Calc calc{};
	EXPECT_THROW(calc.getDivide(10, 0), std::exception);
}
