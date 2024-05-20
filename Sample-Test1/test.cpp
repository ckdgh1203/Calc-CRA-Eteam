#include "pch.h"
#include "../calc/calc.cpp"

using namespace std;

TEST(CalcTest, ZegopException) {
	Calc calc;
	EXPECT_THROW(calc.getZegop(46341), invalid_argument);
}

TEST(CalcTest, ZegopResultForZero) {
	Calc calc;
	EXPECT_EQ(calc.getZegop(0), 0);
}

TEST(CalcTest, ZegopResultForNormalInput) {
	Calc calc;
	int input = 777;
	int expected = (input) * (input);
	EXPECT_EQ(calc.getZegop(input), expected);
}