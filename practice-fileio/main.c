#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <string.h>

int main() {
    char file_name[] = "my-file.txt";
    char file_name2[] = "me.txt";
    char file_name3[] = "cats.txt";
    int length = 0;
    int* positions = (int*) malloc (sizeof(int) * 1);
    positions[0] = -1;
    char my_name[] = "Marton";
    char sentence[] = "a1a2a3a4a5a6a7";

    int size;

    print_each_line(file_name);
    printf("\nThis file has: %d lines\n", count_lines(file_name));
    write_your_name(file_name2, my_name);
    write_multiple_lines(file_name3, "Cica", 10);
    print_each_line(file_name3);
    printf("\nThis file has: %d lines\n", count_lines(file_name3));

    int* array = find_position(sentence, 'a' , &size);
    for(int i = 0; i < size; i++){
        printf("%d\n", array[i]);
    }



    return 0;
}