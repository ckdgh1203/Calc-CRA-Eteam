#include "pch.h"
#include "../calc/calc.cpp"

class CalcFixture : public testing::Test {
public:
	Calc calc;
private:
};

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST_F(CalcFixture, Positive) {
	EXPECT_EQ(calc.getGop(2, 5), 10);
}

TEST_F(CalcFixture, FirstNegative) {
	EXPECT_EQ(calc.getGop(-2, 5), -10);
}

TEST_F(CalcFixture, SecondNegative) {
	EXPECT_EQ(calc.getGop(2, -5), -10);
}

TEST_F(CalcFixture, BothNegative) {
	EXPECT_EQ(calc.getGop(-2, -5), 10);
}

TEST_F(CalcFixture, Zero) {
	EXPECT_EQ(calc.getGop(2, 0), 0);
}