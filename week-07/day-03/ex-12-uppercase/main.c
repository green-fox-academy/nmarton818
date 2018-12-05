#include <stdio.h>
#include <string.h>

char* upperCaseString(char* string){
    int i = 0;
    while (string[i] != '\0'){
        if(string[i] > 96 && string[i] < 123){
            string[i] -= 32;
        }
        i++;
    }
    return string;
}

int equalStrings(char* first, char* second){
    if(!strcmp(upperCaseString(first),upperCaseString(second)))
        return 1;
    else
        return 0;
}

int main() {
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.
    char first[100];
    char second[100];
    printf("Gimme a string!\n");
    gets(first);
    printf("Gimme another string!\n");
    gets(second);

    if(equalStrings(first, second))
        printf("They're equal!\n");
    else
        printf("They're not equal!\n");


    return 0;
}