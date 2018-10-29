#include <iostream>

int factorio(int number){
    int product = 1;
    for(int i = 1; i <= number; i++)
        product *= i;
    return product;
}

int main() {
    int baseNum = 10;
    std::cout << factorio(baseNum) << std::endl;
    return 0;
}