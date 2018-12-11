#include <gtest/gtest.h>
#include "poker.h"


TEST(apple_check, test_apple){
    EXPECT_EQ(getApple(), "apple");
}