#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int avarage(int** school, int* classes_array, int classes_size){
    int sum = 0;
    int students = 0;
    for(int i = 0; i < classes_size; i++)
        students += classes_array[i];

    for(int i = 0; i < classes_size; i++){
        for(int j = 0; j < classes_array[i]; j++)
            sum += school[i][j];
    }
    return sum / students;
}

void fill_exams(int** school, int* classes_array, int classes){
    int random_exam;
    for(int i = 0; i < classes; i++){
        for(int j = 0; j < classes_array[i]; j++){
            random_exam = rand() % 101;
            school[i][j] = random_exam;
        }
    }
}

void print_exams(int** school, int* classes_array, int classes, char** name){
    for(int i = 0; i < classes; i++) {
        printf("%s: \n", name[i]);
        for (int j = 0; j < classes_array[i]; j++) {
            printf("%d ", school[i][j]);
        }
        printf("\n");
    }
}

void create_classes(int* classes_array, int classes, char** name){
    for(int i = 0; i < classes; i++){
        char temp[100];
        printf("What's the name of this class?\n");
        scanf("%s", temp);
        name[i] = (char*) malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(name[i], temp);
        printf("How many students are in the %s class?\n", name[i]);
        scanf("%d", &classes_array[i]);
    }
}

void allocate_exams(int** school, int* classes_array, int classes){
    for(int i = 0; i < classes; i++){
        school[i] = (int*) malloc(classes_array[i] * sizeof(int));
    }
}

void fill_biggest_differences(int** school, const int* class_array, int* differences, int classes){
    for(int i = 0; i < classes; i++){
        int min_index = 0;
        int max_index = 0;
        for(int j = 0; j < class_array[i]; j++){
            if(school[i][j] < school[i][min_index])
                min_index = j;
            if(school[i][j] > school[i][max_index])
                max_index = j;
        }
        differences[i] = school[i][max_index] - school[i][min_index];
    }
}

char* find_biggest_difference_class(int* differences, char** names, int classes, int* diff){
    int max_index = 0;
    for(int i = 0; i < classes; i++){
        if(differences[i] > differences[max_index]) {
            max_index = i;
            *diff = differences[max_index];
        }
    }
    return names[max_index];
}

char* find_best_exam(int** school, int* class_array, int classes, char** names, int* best){
    int best_person = 0;
    int best_class = 0;
    for(int i = 0; i < classes; i++){
        for(int j = 0; j < class_array[i]; j++){
            if(school[i][j] > school[best_class][best_person]){
                best_person = j;
                best_class = i;
                *best = school[best_class][best_person];
            }
        }
    }
    return names[best_class];
}

void free_everything(int** school, int* classes_array, int classes, int* differences){
    for(int i = 0; i < classes; i++){
        free(school[i]);
    }
    free(school);
    free(differences);
    free(classes_array);
}

int main() {
    srand(time(NULL));
    // You will write a program that keeps track of exam results.
    // First, your program should ask the user how many classes took the exam. Let's say this number is N.
    // Then you need to ask how many students took the exam in the first class. Let's say this number is M.
    // You need to ask for the name of the class, the the exam results in percentage M times and store them.
    // The number of students might be different for each class.
    // You need to repeat this N times.
    // Make sure you have a separate function that reads the data and returns it.

    // Once you have the data write functions for the following questions:
    // Which class has the biggest difference between the worst and best exam and how much is the difference?
    // Which class has the best exam?
    // What is the average of all the exams?

    int classes;
    printf("How many classes are there?\n");
    scanf("%d", &classes);
    int* classes_array = (int*) malloc(classes*sizeof(int));
    char** names = (char**) malloc(classes*sizeof(char*));

    create_classes(classes_array, classes, names);

    int** school = (int**) malloc(classes * sizeof(int*));

    allocate_exams(school, classes_array, classes);
    fill_exams(school, classes_array, classes);
    printf("-----------------------------\n");
    print_exams(school, classes_array, classes, names);

    int* differences = (int*) calloc(classes, sizeof(int));
    fill_biggest_differences(school, classes_array, differences, classes);


    int diff = 0;
    int best = 0;
    printf("-----------------------------\n");
    printf("%d percent is the avarage\n", avarage(school, classes_array, classes));
    printf("%d percent is the biggest difference in the class: %s\n", diff, find_biggest_difference_class(differences, names, classes, &diff));
    printf("%d was the best in the class: %s\n", best, find_best_exam(school, classes_array, classes, names, &best));

    free_everything(school, classes_array, classes, differences);

    return 0;
}