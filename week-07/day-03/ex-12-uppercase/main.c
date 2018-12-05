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
    return strcmp(upperCaseString(first),upperCaseString(second));
}

int main() {
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.
    char string[100] = "this text is  totally written in lowercase!";
    char first[100] = "CICA KUTYA BOCI MEDVE";
    char second[100] = "cIca kuTyA Boci meDve";
    printf("%s\n", string);
    printf("%s\n", upperCaseString(string));

    printf("%s\n%s\n", first, second);
    if(equalStrings(first, second) == 0)
        printf("They're equal!\n");
    else
        printf("They're not equal!\n");


    return 0;
}