#include <stdio.h>

int count_between_chars(char* string){
    int maxDistance = 0;
    int i = 0;
    int j;
    while(string[i] != '\0'){
        j = i;
        while(string[j] != '\0'){
            if(string[j] == string[i] && ((j-i) > maxDistance))
                maxDistance = (j-i);
            j++;
        }
        i++;
    }
    return maxDistance -1;
}

int main(void) {
    // Create a function which takes a string as a parameter and
    // returns the number of characters between two repeating characters
    // the repeating char can be a local variable in the function itself or
    // it can be passed to the function as parameter

    char word[100] = "Programming";

    // the output should be: 6 (in this case the repeating char was 'g')
    printf("%d", count_between_chars(word));
    return 0;
}