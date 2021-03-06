// hellogitHubGTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <gtest\gtest.h>
#include <myFunction.h>

class myFuncTest : public ::testing::Test {
};
TEST_F(myFuncTest, testTest)
{
	ASSERT_EQ(4, 4);
}
TEST_F(myFuncTest, TwoSumTwoFour)
{
	ASSERT_EQ(myFunc::Sum(2,2), 4);
}

TEST_F(myFuncTest, FailedTest)
{
	ASSERT_EQ(myFunc::Sum(2, 3), 4);
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

