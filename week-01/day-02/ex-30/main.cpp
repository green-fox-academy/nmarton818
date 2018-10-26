#include <iostream>

int main() {
    // Write a program that reads a number from the standard input, then draws a
    // diamond like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //  *****
    //   ***
    //    *
    //
    // The diamond should have as many lines as the number was

    /*number = 10
     * row = 0 -
     *
     */



    int number;
    std::cout << "Gimme a number!" << std::endl;
    std::cin >> number;
    int row1;

    for(int row = 0; row < number; row++){
        for(int column = 1; column < number; column++){
            if(row >= number / 2) {
                row1 = number - row - 1;
            } else row1 = row;
            if(column >= ((number / 2) - row1) && column <= (number / 2) + row1)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}