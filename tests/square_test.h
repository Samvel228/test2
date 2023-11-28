#ifndef SQUARE_H
#define SQUARE_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}
//askldjaslkd
TEST(SQUARETest, discr_greater_0) {
    double a = 1, b = -3, c = 2;
    double roots[2];
    square(a, b, c, roots);
    ASSERT_EQ(roots[0], 2.0);
    ASSERT_EQ(roots[1], 1.0);
}

TEST(SQUARETest, discr_less_0) {
    double a = 2, b = 2, c = 2;
    double roots[2];
    int test = square(a, b, c, roots);
    ASSERT_EQ(test, 1);
}

TEST(SQUARETest, discr_eq_0) {
    double a = 1, b = -2, c = 1;
    double roots[2];
    square(a, b, c, roots);
    ASSERT_EQ(roots[0], 1.0);
    ASSERT_EQ(roots[1], 1.0);
}
TEST(SQUARETest, integrated) {
    double a = double(fibonachi(5)), b = double(fibonachi(5)), c = double(fibonachi(5));
    double roots[2];
    int test = square(a, b, c, roots);
    ASSERT_EQ(test, 1);
}
#endif // SQUARE_H
