#include "pch.h"
#include "TestingTools.h"

#include "../BinaryChop/BinarySearch.h"
#include "../BinaryChop/BubbleSort.h"

TEST(TestingToolsTest, isSortedAscendingTest) {
	TestingTools testTool;
	int* testNULL = NULL;
	EXPECT_TRUE(testTool.isSortedAscending(0, testNULL));
	int test1[] = { 1 };
	EXPECT_TRUE(testTool.isSortedAscending(1, test1));
	int test2[] = { 1, 2, 3, 4, 5 };
	EXPECT_TRUE(testTool.isSortedAscending(5, test2));
	int test3[] = { 5, 4, 3, 2, 1 };
	EXPECT_FALSE(testTool.isSortedAscending(5, test3));
	int test4[] = { 1, 2, 4, 5, 3 };
	EXPECT_FALSE(testTool.isSortedAscending(5, test4));
	int test5[] = { 1, 5, 20, 40, 50, 80, 1 };
	EXPECT_FALSE(testTool.isSortedAscending(7, test5));
}

TEST(BinarySearchTestSuit, ArrayGenerationTest) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}