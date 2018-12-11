#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* string_repeater(char* string, int cnt){
    char* repeat = (char*) malloc(cnt * sizeof(char) * strlen(string));
    for(int i = 0; i < cnt; i++){
        strcat(repeat, string);
    }
    return repeat;
}

int main() {
    char string[100];
    int cnt;
    printf("Gimme a string!\n");
    gets(string);
    char* new_str = (char*) malloc(strlen(string) * sizeof(char));
    strcat(new_str, string);

    printf("Gimme how many times you want it!\n");
    scanf("%d", &cnt);
    printf("%s\n", string_repeater(new_str, cnt));
    return 0;
}