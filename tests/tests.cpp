#include <gtest/gtest.h>
#include "../include/math/mul.h"
#include "../include/math/sum.h"
#include "../include/math/minus.h"
#include "../include/meta/meta.h"

TEST(SUM, int_double_TEST) {
    EXPECT_EQ(sum(0.6, 0.6), 1.2);
    EXPECT_EQ(sum(1, 1), 2);
}
