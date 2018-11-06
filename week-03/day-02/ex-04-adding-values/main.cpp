#include <iostream>

int main() {
    // Add two numbers using pointers

    int a = 20;
    int b = 17;
    int* aPtr = &a;
    int* bPtr = &b;

    std::cout << *aPtr + (*bPtr) << std::endl;



    return 0;
}