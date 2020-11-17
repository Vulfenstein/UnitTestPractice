/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

//is Palindrome test

TEST(PracticeTest, not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, string_of_symbols)
{
    Practice obj;
    bool actual = obj.isPalindrome("$6!~");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, complex_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ASantaLivedAsaDevilAtNASA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, empty_string)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

//sort descending test

TEST(PracticeTest, low_mid_high)
{
    Practice obj;
	int val0 = 1;
	int val1 = 20;
	int val2 = 300;
    obj.sortDescending(val0, val1, val2);
    ASSERT_EQ(val0, 300);
	ASSERT_EQ(val1, 20);
	ASSERT_EQ(val2, 1);
}

TEST(PracticeTest, low_high_mid)
{
    Practice obj;
	int val0 = 1;
	int val1 = 300;
	int val2 = 20;
    obj.sortDescending(val0, val1, val2);
    ASSERT_EQ(val0, 300);
	ASSERT_EQ(val1, 20);
	ASSERT_EQ(val2, 1);
}

TEST(PracticeTest, mid_low_high)
{
    Practice obj;
	int val0 = 20;
	int val1 = 1;
	int val2 = 300;
    obj.sortDescending(val0, val1, val2);
    ASSERT_EQ(val0, 300);
	ASSERT_EQ(val1, 20);
	ASSERT_EQ(val2, 1);
}

TEST(PracticeTest, mid_high_low)
{
    Practice obj;
	int val0 = 20;
	int val1 = 300;
	int val2 = 1;
    obj.sortDescending(val0, val1, val2);
    ASSERT_EQ(val0, 300);
	ASSERT_EQ(val1, 20);
	ASSERT_EQ(val2, 1);
}

TEST(PracticeTest, high_low_mid)
{
    Practice obj;
	int val0 = 300;
	int val1 = 1;
	int val2 = 20;
    obj.sortDescending(val0, val1, val2);
    ASSERT_EQ(val0, 300);
	ASSERT_EQ(val1, 20);
	ASSERT_EQ(val2, 1);
}

TEST(PracticeTest, high_mid_low)
{
    Practice obj;
	int val0 = 300;
	int val1 = 20;
	int val2 = 1;
    obj.sortDescending(val0, val1, val2);
    ASSERT_EQ(val0, 300);
	ASSERT_EQ(val1, 20);
	ASSERT_EQ(val2, 1);
}

TEST(PracticeTest, three_same_values)
{
    Practice obj;
	int val0 = 1;
	int val1 = 1;
	int val2 = 1;
    obj.sortDescending(val0, val1, val2);
    ASSERT_EQ(val0, 1);
	ASSERT_EQ(val1, 1);
	ASSERT_EQ(val2, 1);
}

TEST(PracticeTest, two_same_values)
{
    Practice obj;
	int val0 = 1;
	int val1 = 1;
	int val2 = 3;
    obj.sortDescending(val0, val1, val2);
    ASSERT_EQ(val0, 3);
	ASSERT_EQ(val1, 1);
	ASSERT_EQ(val2, 1);
}