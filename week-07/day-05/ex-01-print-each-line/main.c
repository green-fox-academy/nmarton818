#include <stdio.h>

// Write a program that opens a file called "my-file.txt", then prints
// each of lines form the file.
// You have to create the file, you can use C-programming but it is not mandatory

int main() {
    FILE* file_ptr;
    file_ptr = fopen("mytext.txt", "r");


    return 0;
}