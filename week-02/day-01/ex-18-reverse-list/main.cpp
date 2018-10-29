#include <iostream>

int main() {
    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj[] = {3, 4, 5, 6, 7};
    int temp;
    int size = sizeof(aj) / sizeof(aj[0]);

    for(int i = 0; i < size / 2 ; i++){
        temp = aj[i];
        aj[i] = aj[size-i-1];
        aj[size-i-1] = temp;
    }
    for(int i = 0; i < size; i++){
        std::cout << aj[i] << ' ';
    }
    return 0;
}