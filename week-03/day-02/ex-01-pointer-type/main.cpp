#include <iostream>

int main() {
    int a = 31;
    std::cout << &a << std::endl;
    double b = 432.2;
    std::cout << &b << std::endl;
    std::string name = "Bob";
    std::cout << &name << std::endl;
    return 0;
}