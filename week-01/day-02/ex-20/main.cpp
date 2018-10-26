#include <iostream>

int main() {
    int number1;
    int number2;
    std::cout << "Gimme my first number!" << std::endl;
    std::cin >> number1;
    std::cout << "Gimme my second number!" << std::endl;
    std::cin >> number2;

    if(number1 > number2)
        std::cout << "The first number is bigger, it's: " << number1 << std::endl;
    else if(number2 > number1)
        std::cout << "The second number is bigger, it's: " << number2 << std::endl;
    else
        std::cout << "These numbers are equal!" << std::endl;

    return 0;
}