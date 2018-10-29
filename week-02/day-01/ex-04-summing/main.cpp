#include <iostream>

int sum(int number){
    int sum = 0;
    for(int i = 0; i < number; i++)
        sum += i;
    return sum;
}

int main() {
    int baseNum = 10;
    std::cout << sum(baseNum) << std::endl;
    return 0;
}