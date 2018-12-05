#include <stdio.h>

int is_Odd(int number){
    return (number % 2 != 0);
}

int main() {
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)
    int number;
    printf("Gimme a number!\n");
    scanf("%d", &number);
    if(is_Odd(number))
        printf("This number is odd: %d\n", number);
    else
        printf("This is an even number: %d\n", number);

    return 0;
}