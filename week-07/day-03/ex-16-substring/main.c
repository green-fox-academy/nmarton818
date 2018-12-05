#include <stdio.h>
#include <string.h>

int isSubstring(char* first, char* second){
    char* longer = first;
    char* shorter = second;
    if(strlen(first) < strlen(second)){
        shorter = first;
        longer = second;
    } else if(strlen(first) == strlen(second))
        return -1;
    
    if(strstr(longer, shorter) != NULL)
        return 1;
    else
        return 0;
}

int main( ){
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the shorter string is a substring of the longer one and
    // returns 0 otherwise
    // If the two strings has the same lenght than the function should return -1
    char first[100];
    char second[100];
    printf("Gimme a string!\n");
    gets(first);
    printf("Gimme another string!\n");
    gets(second);
    printf("%d\n", isSubstring(first, second));

    return 0;
}
