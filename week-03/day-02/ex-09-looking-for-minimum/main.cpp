#include <iostream>

int* minimumValue(int* array, int lenght){
    int minimum = array[0];
    int* minimumPtr = array;
    for(int i = 0; i < lenght; i++){
        if(array[i] < minimum){
            minimum = array[i];
            minimumPtr = array + i;
        }
    }
    return minimumPtr;
}

int main() {
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {-1, 4, 66, 101, 87, 3, -23};

    std::cout << "The minimum value is: " << *minimumValue(numbers, 7) << ", and its address: " << minimumValue(numbers, 7) << std::endl;
    return 0;
}