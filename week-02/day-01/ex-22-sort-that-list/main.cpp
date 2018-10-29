#include <iostream>

void printArray(int array[], int size);

int& bubbleSort(int* list, bool descending, int size){

    int temp;

        for(int i = 0; i < size; i++){
            for(int j = 0; j < size -1; j++){
                if(descending) {
                    if (list[j] < list[j + 1]) {
                        temp = list[j + 1];
                        list[j + 1] = list[j];
                        list[j] = temp;
                    }
                }
                else{
                    if(list[j] > list[j+1]){
                        temp = list[j+1];
                        list[j+1] = list[j];
                        list[j] = temp;
                    }
                }
            }
        }
        return *list;
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}


int main() {
    //  Create a function that takes a list of numbers as parameter
    //  Don't forget you have to pass the size of the list as a parameter as well
    //  Returns a list where the elements are sorted in ascending numerical order by using bubble sort
    //  Make a second boolean parameter, if it's `true` sort that list descending
    int a[10] = {25, 12, 333, 0, 330, 231, 2, 9, 12, 75,};
    int b[11] = {9, 11, 22, 918, 1, 33, 76, 127, 1, 12, 44};


    std::cout << "a array: "; printArray(a, 10);
    std::cout << "b array: "; printArray(b, 11);
    int &q = bubbleSort(b, true, 11);
    int &p = bubbleSort(a, false, 10);

    //having some difficulties with pointers and arrays, will fix it soon, sometime
    //it works somehow, will find out why
    std::cout << "a array: "; printArray(a, 10);
    std::cout << "b array: "; printArray(b, 11);
    std::cout << "a adress: " << a << ", p adress: " << p << std::endl;
    std::cout << "b adress: " << b << ", q adress: " << q << std::endl;
    std::cout << "p array = a in ascending: "; printArray(&p, 10);
    std::cout << "q array = b in descending: "; printArray(&q, 11);


    return 0;
}