#include "Tasks_funcs.h"
#include <gtest/gtest.h>

TEST(InputTest, task3_1)
{
    char str[10] = "dadmomdad";
    char* str1 = new char[10];
    for (int i = 0; i < 10; ++i)
    {
        str1[i] = str[i]; 
    }
    char str2[12] = "dad mom dad";
    char* str3 = new char[12];
    for (int i = 0; i < 12; ++i)
    {
        str3[i] = str2[i]; 
    }
    EXPECT_EQ(func3(12, str3, str1),1);
}

TEST(InputTest, task2_1)
{
    char str[13] = "da dm omda d";
    char* str1 = new char[13];
    for (int i = 0; i < 13; ++i)
    {
        str1[i] = str[i]; 
    }
    EXPECT_EQ(func2(13, str1, 4, 1),1);
}

TEST(InputTest, task1_1)
{
    char str[20] = "1 2 3 4 5 6 7 8 9 0";
    char* str1 = new char[20];
    for (int i = 0; i < 20; ++i)
    {
        str1[i] = str[i]; 
    }
    EXPECT_EQ(func1(20, str1),5);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
