//apple.cpp
#include "apple.h"
#include <vector>

std::string getApple()
{
    return "apple";
}

int sum(std::vector<int> numbers){
    int sum = 0;
    for(int i = 0; i < numbers.size(); i++)
        sum += numbers[i];
    return sum;
}