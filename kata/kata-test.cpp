#include "kata.h"
#include <gtest/gtest.h>

namespace kata {

TEST(kata, kata_sum) {
  int a = 2;
  int b = 3;
  int c = kata::sum(a, b);
  int wantResult = 5;
  EXPECT_EQ(c, wantResult);
}
} // namespace kata