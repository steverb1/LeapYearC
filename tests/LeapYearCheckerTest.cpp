#include <gtest/gtest.h>

extern "C"
{
    #include "../src/LeapYear.h"
}

TEST(LeapYearTest, NotDivisibleByFour)
{
    int year = 1997;
    bool leapYear = isLeapYear(year);
    EXPECT_FALSE(leapYear);
}

TEST(LeapYearTest, DivisibleByFour)
{
    int year = 1996;
    bool leapYear = isLeapYear(year);
    EXPECT_TRUE(leapYear);
}

TEST(LeapYearTest, DivisibleBy100)
{
    int year = 1900;
    bool leapYear = isLeapYear(year);
    EXPECT_FALSE(leapYear);
}

TEST(LeapYearTest, DivisibleBy400)
{
    int year = 2000;
    bool leapYear = isLeapYear(year);
    EXPECT_TRUE(leapYear);
}

TEST(LeapYearTest, DivisibleByFoo)
{
    int year = 2100;
    bool leapYear = isLeapYear(year);
    EXPECT_FALSE(leapYear);
}
