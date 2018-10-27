#include <iostream>

int main() {
    int number;
    std::cout << "Gimme a number!" << std::endl;
    std::cin >> number;

    for(int row = 0; row < number; row++){

        for(int column = 0; column < number; column++){
            if(0 == row || number - 1 == row || 0 == column || number - 1 == column || column == row || column == number - row - 1)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}