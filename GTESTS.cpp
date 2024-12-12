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

TEST(InputTest, task3_2)
{
    char str[10] = "foolaloof";
    char* str1 = new char[10];
    for (int i = 0; i < 10; ++i)
    {
        str1[i] = str[i]; 
    }
    char str2[12] = "fool a loof";
    char* str3 = new char[12];
    for (int i = 0; i < 12; ++i)
    {
        str3[i] = str2[i]; 
    }
    EXPECT_EQ(func3(12, str3, str1),1);
}

TEST(InputTest, task3_3)
{
    char str[41] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    char* str1 = new char[41];
    for (int i = 0; i < 41; ++i)
    {
        str1[i] = str[i]; 
    }
    char str2[45] = "aaaaaaaa aaaaaaaa aaaaaaaa aaaaaaaa aaaaaaaa";
    char* str3 = new char[45];
    for (int i = 0; i < 45; ++i)
    {
        str3[i] = str2[i]; 
    }
    EXPECT_EQ(func3(45, str3, str1),1);
}

TEST(InputTest, task3_4)
{
    char str[] = "";
    char* str1 = new char[0];
    char str2[] = "";
    char* str3 = new char[0];
    EXPECT_EQ(func3(0, str3, str1),1);
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

TEST(InputTest, task2_2)
{
    char str[16] = "123 123 123 123";
    char* str1 = new char[16];
    for (int i = 0; i < 16; ++i)
    {
        str1[i] = str[i]; 
    }
    EXPECT_EQ(func2(16, str1, 3, 3),1);
}

TEST(InputTest, task2_3)
{
    char str[34] = "a aaaaaaaaaaaaaa aaaaaaaaaaaaaaaa";
    char* str1 = new char[34];
    for (int i = 0; i < 34; ++i)
    {
        str1[i] = str[i]; 
    }
    EXPECT_EQ(func2(34, str1, 16, 1),1);
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

TEST(InputTest, task1_2)
{
    char str[36] = "1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 5 6 7";
    char* str1 = new char[36];
    for (int i = 0; i < 36; ++i)
    {
        str1[i] = str[i]; 
    }
    EXPECT_EQ(func1(36, str1),8);
}

TEST(InputTest, task1_3)
{
    char str[20] = "1 1 1 1 1 1 1 1 1 1";
    char* str1 = new char[20];
    for (int i = 0; i < 20; ++i)
    {
        str1[i] = str[i]; 
    }
    EXPECT_EQ(func1(20, str1),0);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
