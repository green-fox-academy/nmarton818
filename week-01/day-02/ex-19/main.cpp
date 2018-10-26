#include <iostream>

int main() {
    int number;
    std::cout << "Gimme a number!" << std::endl;
    std::cin >> number;
    if(0 >= number )
        std::cout << "Not enough!" << std::endl;
    else if(1 == number)
        std::cout << "The number is ONE!" << std::endl;
    else if(2 == number)
        std::cout << "The number is TWO!" << std::endl;
    else
        std::cout << "This number is to big for me to comprehend!" << std::endl;

    return 0;
}