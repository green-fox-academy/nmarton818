#include <stdio.h>

int is_oldEnough(int age){
    return (age >= 18);
}

int main() {
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary
    printf("17: %d\n", is_oldEnough(17));
    printf("18: %d\n", is_oldEnough(18));
    printf("44: %d\n", is_oldEnough(44));

    return 0;
}