#include <iostream>

int main() {
    int km;
    std::cout << "Gimme kms pls!" << std::endl;
    std::cin >> km;
    double miles = km  / 1.60934;
    std::cout << miles << " miles are " << km << "km-s" << std::endl;

    return 0;
}