#include <stdio.h>
#include <string.h>

int lengthWithoutString(char* name){
    int cnt = 0;
    while(name[cnt] != '\0'){
        cnt++;
    }
    return cnt;
}

int lengthWithString(char* name){
    return strlen(name);
}

int main() {
    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercie with and without using string.h functions
    char name[100];
    printf("Hi, please introduce yourself!\n");
    gets(name);
    printf("Without string.h: %d\n", lengthWithoutString(name));
    printf("With string.h: %d\n", lengthWithString(name));


    return 0;
}