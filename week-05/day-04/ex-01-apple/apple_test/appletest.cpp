//appletest.cpp
#include <gtest/gtest.h>
#include "apple.h"

std::vector<int> numbers1 = {1, 1, 1, 1, 1};
std::vector<int> numbers2 = {0, 0, 0, 0, 0};
std::vector<int> numbers3 = {};


TEST(apple_check, test_apple){
    ASSERT_EQ(getApple(), "apple");
}

TEST(apple_check2, test_apple2){
    EXPECT_EQ(sum(numbers2), 0);
}

TEST(apple_check3, test_apple3){
    EXPECT_EQ(sum(numbers3), 0);
}