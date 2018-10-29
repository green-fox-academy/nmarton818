#include <iostream>

int sum(int a[], int size){
    int suma = 0;
    for(int i = 0; i < size; i++){
        suma += a[i];
    }
    return suma;
}

int main() {
    // - Create an array variable named `ai`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Print the sum of the elements in `ai`
    int ai[] = {3, 4, 5, 6, 7};
    int size = sizeof(ai) / sizeof(ai[0]);
    std::cout << "The sum of these numbers: " << sum(ai,size) << std::endl;

    return 0;
}