#include <iostream>

int main() {
    int number;
    std::cout << "Gimme a number!" << std::endl;
    std::cin >> number;

    for(int row1 = 0; row1 < number *2; row1++){
        int row;
        if(row1 >= number)
            row = 2 * number - row1 - 1;
        else row = row1;
        for(int column = 0; column < number *2; column++){
            if(row == 0 ||
            column == 0 || column == number || column == number -1 ||
            column == 2 * number -1 || row == number ||
            row == number -1 || column == row ||
            column == 2 * number - row -1 || column == 2 * number - row -2 || column == row + 1 )
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}