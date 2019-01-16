#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int print_each_line(char* file_name){
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory
    FILE *file_pointer = fopen(file_name, "r");
    if(file_pointer == NULL) {
        printf("NO FILE TO OPEN!\n");
        return 1;
    }
    char text[BUFFERSIZE];
    while(fgets(text, BUFFERSIZE, file_pointer) != NULL)
        printf("%s", text);

    fclose(file_pointer);
    return 0;
}

int count_lines(char* file_name){
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file
    FILE* file_pointer = fopen(file_name, "r");
    if(file_pointer == NULL){
        printf("NO FILE TO OPEN!\n");
        return -1;
    }
    char text[BUFFERSIZE];
    int cnt = 0;
    while(fgets(text, BUFFERSIZE, file_pointer) != NULL)
        cnt++;

    fclose(file_pointer);
    return cnt;
}

int write_your_name(char* file_name, char* text){
        // Open a file called "my-file.txt"
        // Write your name in it as a single line
    FILE* file_pointer = fopen(file_name, "w");
    if(file_pointer == NULL){
        printf("NO FILE TO OPEN!\n");
        return 1;
    }
    fprintf(file_pointer, text);
    fclose(file_pointer);
    return 0;
}

int write_multiple_lines(char* file_name, char* text, int number){
    // Create a function that takes 3 parameters: a path, a word and a number,
    // than it should write to a file.
    // The path parameter should describes the location of the file.
    // The word parameter should be a string, that will be written to the file as lines
    // The number paramter should describe how many lines the file should have.
    // So if the word is "apple" and the number is 5, than it should write 5 lines
    // to the file and each line should be "apple"

    FILE* file_pointer = fopen(file_name, "w");
    if(file_pointer == NULL){
        printf("NO FILE TO OPEN!\n");
        return 1;
    }
    for(int i = 0; i < number; i++){
        fprintf(file_pointer, "%s\n", text);
    }
    fclose(file_pointer);
    return 0;
}

char** sentence_to_words(const char* sentence, int* sentence_lenght){
    // create a function which takes a char array as a parameter,
    // and splits a string to words by space
    // solve the problem with the proper string.h function
    char* sent = (char*) malloc (sizeof(char*) * (strlen(sentence) + 1));
    strcpy(sent, sentence);

    char** tokenized_sentence = (char**) malloc(sizeof(char*));
    *sentence_lenght = 1;
    int i = 0;
    char buffer[20];
    char* token = strtok(sent, " ");
    strcpy(buffer, token);
    while(token != NULL){
        tokenized_sentence = realloc(tokenized_sentence, (*sentence_lenght)* sizeof(char*));

        char* word = (char*) malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(word, buffer);
        printf("%s %d\n", word, strlen(word));

        tokenized_sentence[i] = word;
        i++;
        (*sentence_lenght) += 1;
        token = strtok(NULL, " ");
        if(token)
            strcpy(buffer, token);

    }
    free(sent);
    return tokenized_sentence;

}

int* find_position(const char* sentence, char c, int* size){
    int i = 0;
    int temp_size = 0;
    int* position = (int*) malloc(sizeof(int) * 1);
    while(sentence[i] != '\0'){
        if(sentence[i] == c) {
            position[temp_size] = i;
            temp_size++;
            position = (int *) realloc(position, sizeof(int) * (temp_size + 1));
            printf("i: %d, size: %d\n", i, temp_size);
        }
        i++;
    }
    *size = temp_size;
    return position;
}
