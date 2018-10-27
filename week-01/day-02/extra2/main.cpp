#include <iostream>

int main() {
    //I guess you can code this in a much more elegant way, I was just having fun doing this
    //for the input of 10 it does this:
    /*10
    --------------------
    |\\      ||      //|
    | \\     ||     // |
    |  \\    ||    //  |
    |   \\   ||   //   |
    |    \\  ||  //    |
    |     \\ || //     |
    |      \\||//      |
    |       \||/       |
    |------------------|
    |------------------|
    |       /||\       |
    |      //||\\      |
    |     // || \\     |
    |    //  ||  \\    |
    |   //   ||   \\   |
    |  //    ||    \\  |
    | //     ||     \\ |
    |//      ||      \\|
    --------------------
    */
    int number;
    std::cout << "Gimme a number!" << std::endl;
    std::cin >> number;

    for(int row1 = 0; row1 < number *2; row1++){
        int row;
        if(row1 >= number)
            row = 2 * number - row1 - 1;
        else row = row1;
        for(int column = 0; column < number *2; column++){
            if((row1 == number || row1 == number -1) && (column == 0 || column == number *2 -1))
                std::cout << "|";
            else if(row == 0 || row == number -1 || row == number )
                std::cout << "-";
            else if(column == 0 || column == number || column == number -1 ||
                    column == 2 * number -1)
                std::cout << "|";
            else if((column == row || column == row + 1) && row1 >= number)
                std:: cout << "/";
            else if((column == row || column == row + 1) && row1 <= number)
                std::cout << "\\";
            else if((column == 2 * number - row -1 || column == 2 * number - row -2) && row1 <= number )
                std::cout << "/";
            else if((column == 2 * number - row -1 || column == 2 * number - row -2) && row1 >= number )
                std::cout << "\\";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
