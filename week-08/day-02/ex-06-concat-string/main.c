#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat_strings(char* first, char* second){
    int new_length = (strlen(first) + strlen(second) + 1);
    int first_length = strlen(first);

    int j = 0;
    first = (char*) realloc(first, new_length * sizeof(char));
    for(int i = first_length; i < new_length; i++){
        first[i] = second[j];
        j++;
    }
    return first;
}

int main() {
    // write a function which takes 2 strings as parameter, concatenates them together and returns it back.
    // Test it for long and empty strings as well.
    // Try to use the least amount of memory that's possible.
    char* cica = (char*) malloc(5* sizeof(char));
    char* kutya = (char*) malloc(6* sizeof(char));
    cica[0] = 'c';
    cica[1] = 'i';
    cica[2] = 'c';
    cica[3] = 'a';
    cica[4] = '\0';


    printf("%s\n", cica);
    cica = concat_strings(cica, "kutya");
    printf("%s\n", cica);
    cica = concat_strings(cica, "boci");
    printf("%s\n", cica);



    return 0;
}