#include <stdio.h>

int is_equal(int a, int b){
    return (a == b);
}

int main() {
    // Create a program which asks for two integers and stores them separatly
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise
    int first;
    int second;
    printf("Gimme a number!\n");
    scanf("%d", &first);
    printf("Gimme another!\n");
    scanf("%d", &second);
    if(is_equal(first, second))
        printf("They are equal: %d = %d\n", first, second);
    else
        printf("They are not equal: %d != %d\n", first, second);

    printf("Hello, World!\n");
    return 0;
}