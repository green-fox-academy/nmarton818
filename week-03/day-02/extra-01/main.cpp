#include <iostream>
#include <string>


int main() {
    //sort an array of string pointers by only changing where they're pointing
    std::string first = "9";
    std::string second = "8";
    std::string third = "7";
    std::string fourth = "6";
    std::string fifth = "5";
    std::string sixth = "4";
    std::string seventh = "3";
    std::cout << "Original: " << std::endl;
    std::string* array[7] = {&first, &second, &third, &fourth, &fifth, &sixth, &seventh};
    std::string temp;
    for(int i = 0; i < 7; i++) {
        std::cout << array[i] << ": ";
        std::cout << *array[i] << std::endl;
    }
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 6; j++){
            if(*array[j] > *array[j+1]){
                temp = *array[j];
                *array[j] = *array[j+1];
                *array[j+1] = temp;
            }
        }
    }
    std::cout << std::endl << "Sorted:" << std::endl;
    for(int i = 0; i < 7; i++) {
        std::cout << array[i] << ": ";
        std::cout << *array[i] << std::endl;
    }

    return 0;
}