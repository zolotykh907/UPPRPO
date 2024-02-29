#include <gtest/gtest.h>
#include "../include/math/mul.h"
#include "../include/math/sum.h"
#include "../include/math/minus.h"
#include "../include/meta/meta.h"

TEST(SUM, int_double_TEST) {
    EXPECT_EQ(sum(0.6, 0.6), 1.2);
    EXPECT_EQ(sum(1, 1), 2);
}
TEST(MINUS, int_double_TEST) {
    EXPECT_EQ(minus(1.6, 0.4), 1.2);
    EXPECT_EQ(minus(3, 1), 2);
}
TEST(MUL, int_double_TEST) {
    EXPECT_EQ(minus(1.2, 1.0), 1.2);
    EXPECT_EQ(minus(2, 1), 2);
}
