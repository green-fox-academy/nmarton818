#include <iostream>

int main() {
    int first = 123;
    int second = 550;
    int temp = first;
    first = second;
    second = temp;

    std::cout << "I swaped these variables. Yeeey!" << std:: endl;
    return 0;
}