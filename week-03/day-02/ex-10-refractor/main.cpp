#include <iostream>

void gimmeLenght(int& number){
    std::cout << "Gimme the lenght!" << std::endl;
    std::cin >> number;
}

void fillArray(int* array, int lenght){
    for(int i = 0; i < lenght; i++){
        std::cout << "Gimme a number: " << std::endl;
        std::cin >> array[i];
    }
}

void findMax(int* array, int lenght, int& max, int* maxPtr){
    for(int i = 0; i < lenght; i++){
        if(i == 0){
            max = array[0];
            maxPtr = array;
        }
        else if(array[i] > max){
            max = array[i];
            maxPtr = array + i;
        }
    }
}


int main() {
    // Refactor time!
    // use your 'refactor_maximum.cpp', solve the same exercise by creating a separate function
    // for each functionality

    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it
    int L;
    int* maxPoint;
    int max;
    int array[100];
    gimmeLenght(L);
    fillArray(array, L);
    findMax(array, L, max, maxPoint);

    std::cout << "Lenght: " << L << ", max: " << max << ", maxPtr: " << maxPoint << std::endl;




      return 0;
}