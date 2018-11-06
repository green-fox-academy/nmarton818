#include <iostream>

int main() {
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it
    int lenght;
    int array[100];
    int max;
    int* maxPtr;
    int maxPos;
    std::cout << "Gimme the lenght of the array: " << std::endl;
    std::cin >> lenght;
    int i = 0;
    do{
        std::cout << "Gimme a number!" << std::endl;
        std::cin >> array[i];
        if(i == 0){
            max = array[0];
            maxPtr = array;
            maxPos = 0;
        } else if(array[i] > max){
            max = array[i];
            maxPtr = array +  i;
            maxPos = i+1;
        }
        i++;
    }while(i < lenght);

    std::cout << "First adress: " << array << std::endl;
    std::cout << "Max: " << max << ", its position: " << maxPos << ", and it's address: " << maxPtr << std::endl;

    return 0;
}