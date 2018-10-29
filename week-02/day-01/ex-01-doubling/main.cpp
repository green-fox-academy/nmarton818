#include <iostream>

int doubling(int number){
    return number *2;
}


int main() {
    int baseNum = 123;
    std::cout << "baseNum * 2 = " << doubling(baseNum) << std::endl;
    return 0;
}