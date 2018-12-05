#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int guessThis = 1 + rand() % 100;
    int guess;
    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8

    printf("Guess the number!\n");
    scanf("%d", &guess);

    while(guess != guessThis){
        if(guess > guessThis)
            printf("The stored number is lower!\n");
        else if(guess < guessThis)
            printf("The stored number is higher!\n");

        printf("Guess again!\n");
        scanf("%d", &guess);
    }
    printf("Congrats, you got the number right!\n");

    return 0;
}