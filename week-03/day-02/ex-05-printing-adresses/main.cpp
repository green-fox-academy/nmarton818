#include <iostream>

int main() {
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array
    int array[5];
    for(int i = 0; i < 5; i++){
        std::cout << "Gimme a number! " << std::endl;
        std::cin >> array[i];
        std::cout << "The adress of that number is: " << &array[i] << std::endl;
    }

    return 0;
}