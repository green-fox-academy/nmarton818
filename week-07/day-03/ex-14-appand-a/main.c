#include <stdio.h>
#include <string.h>



int main() {
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string

    char string[100];
    printf("Gimme a string!\n");
    gets(string);
    printf("%s\n", string);
    strcat(string, "a");
    printf("%s\n", string);

    return 0;
}