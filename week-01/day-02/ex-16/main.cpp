#include <iostream>

int main() {
    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have
    int chickens;
    int pigs;

    std::cout << "Gimme the chickens!" << std::endl;
    std::cin >> chickens;
    std::cout << "Now gimme the pigs pls!" << std::endl;
    std::cin >> pigs;

    std::cout << "There are " << chickens * 2 + pigs * 4 << " legs!" << std::endl;


    return 0;
}