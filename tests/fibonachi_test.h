#ifndef FIBONACHI_H
#define FIBONACHI_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(fibonachiTest, greather2) {
    ASSERT_EQ(fibonachi(5), 5);
    ASSERT_EQ(fibonachi(10), 55);
}

TEST(fibonachiTest, negative) {
    ASSERT_EQ(fibonachi(-1), 0);
}

TEST(fibonachiTest, average) {
    ASSERT_EQ(fibonachi(1), 1);
}

#endif // FIBONACHI_H
