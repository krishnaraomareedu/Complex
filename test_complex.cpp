#include <gtest/gtest.h>
#include "complex.h"

namespace
{
    TEST(Print, Empty_Constructor)
    {
        Complex<int> c1;
        EXPECT_EQ(0, c1.get_Real());
        EXPECT_EQ(0, c1.get_Img());
    }

    TEST(Print, Para_Constructor)
    {
        Complex<int> c1(10,2);
        EXPECT_EQ(10, c1.get_Real());
        EXPECT_EQ(2, c1.get_Img());
    }

    TEST(Print, Copy_Constructor)
    {
        Complex<int> c1(20,5);
        EXPECT_EQ(20, c1.get_Real());
        EXPECT_EQ(5, c1.get_Img());

        Complex<int> c2(c1);
        EXPECT_EQ(6, c2.get_Real());
        EXPECT_EQ(12, c2.get_Img());
    }
}