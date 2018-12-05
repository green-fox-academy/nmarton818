#include <stdio.h>

int is_prime(int number){
    for(int i = 2; i < number/2; i++){
        if(number % i == 0)
            return 0;
    }
    if(number != 0 && number != 1) {
        return 1;
    } else
        return 0;
}

int main() {
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)
    int number;
    printf("Gimme a number!\n");
    scanf("%d", &number);
    printf("%d is ", number);
    if(is_prime(number))
        printf("a prime!\n");
    else
        printf("not a prime!\n");

    return 0;
}