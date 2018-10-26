#include <iostream>

int main() {
    int number;
    std::cout << "Gimme a number!" << std::endl;
    std::cin >> number;

    if(number % 2 == 0)
        std::cout << "It's an even number!" << std::endl;
    else
        std::cout << "It's an odd number!" << std::endl;

    return 0;
}