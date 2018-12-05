#include <stdio.h>

int findCharcter(char* string, char c){
    int i = 0;
    while(string[i] != '\0'){
        if(string[i] == c)
            return i;
    i++;
    }
    return -1;
}

int main() {
    // Create a program which asks for a string and a character and stores them
    // Create a function which takes a string and a character as a parameter and
    // if the given character is in the string, it should return the index of the
    // first appearance (in the given string) otherwise the function should return -1
    //
    // Example:
    //
    // Case 1:
    //
    // given_string = "embedded"
    // given_char = 'd'
    //
    // the function should return: 4, because this is the index of the first appearance of char 'd'
    //
    //
    // Case 2:
    //
    // given_string = "embedded"
    // given_char = 'a'
    //
    // the function should return: -1, because there is no 'a' in the word "embedded"
    //
    char string[100];
    char c;
    printf("Gimme a string!\n");
    gets(string);
    printf("Gimme a characher you wanna find!\n");
    scanf("%c", &c);

    if(findCharcter(string, c) != -1)
        printf("I found '%c' at position %d.\n", c, findCharcter(string, c));
    else
        printf("I didn't find '%c' in this string: %s\n", c, string);
    return 0;
}