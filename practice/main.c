#include <stdio.h>

typedef struct vector{
    int* array;
    int size;
    int capacity;
}vector_t;

void instert_element(vector_t* vector1, int element);
void


int main() {
    vector_t vector1;
    instert_element(&vector1, 20);
    printf("Hello, World!\n");
    return 0;
}