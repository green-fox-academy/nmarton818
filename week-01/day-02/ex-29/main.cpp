#include <iostream>

int main() {
    int number;
    std::cout << "Gimme a number!" << std::endl;
    std::cin >> number;

    for(int i = 0; i < number; i++){
        for(int j = 0; j < (number * 2) ; j++){
            if(j >= number - i && j <= number + i)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}