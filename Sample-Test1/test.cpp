#include "pch.h"

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
