#ifndef PRACTICE_FILEIO_FUNCTIONS_H
#define PRACTICE_FILEIO_FUNCTIONS_H

#define BUFFERSIZE 50

int print_each_line(char* file_name);
int count_lines(char* file_name);
int write_your_name(char* file_name, char* text);
int write_multiple_lines(char* file_name, char* text, int number);
char** sentence_to_words(const char* sentence, int* sentence_length);
int* find_position(const char* sentence, char c, int* size);
#endif //PRACTICE_FILEIO_FUNCTIONS_H
