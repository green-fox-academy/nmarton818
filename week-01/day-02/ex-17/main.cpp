#include <iostream>

int main() {
    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4
    int sum = 0;
    int number;
    for(int i = 0; i < 5; i++){
        std::cout << "Give me a number pls!" << std::endl;
        std::cin >> number;
        sum += number;
    }
    std::cout << "The sum is " << sum << " the avg is " << (sum / 5.0) << std::endl;

    return 0;
}