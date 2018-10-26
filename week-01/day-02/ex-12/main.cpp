#include <iostream>

int main() {
    double a = 10.111;
    double b = a;
    double c = a;
    double volume = a * b * c;
    double area = (a * b * 2) + (b * c * 2) + (a * c * 2);

    std::cout << "Area: " << area << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}