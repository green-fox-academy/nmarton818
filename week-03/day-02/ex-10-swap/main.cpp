#include <iostream>

void swapPtr(int* first, int* second){
    int temp = *first;
    *first = *second;
    *second = temp;
}

void swapRfr(int& first, int& second){
    int temp = first;
    first = second;
    second = temp;
}

int main() {
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;
    std::cout << "a: " << a << " b: " << b << std::endl;
    swapPtr(&a, &b);
    std::cout << "a: " << a << " b: " << b << std::endl;
    swapRfr(a, b);
    std::cout << "a: " << a << " b: " << b << std::endl;

    return 0;
}