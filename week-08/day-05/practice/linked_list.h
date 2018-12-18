#ifndef PRACTICE_LINKED_LIST_H
#define PRACTICE_LINKED_LIST_H

typedef struct linked_list{
    int value;
    int x;
    int y;
    struct linked_list* next;
    struct linked_list* prev;
}linked_list_t;

void init_list(linked_list_t** head, linked_list_t** tail);
void push_back(linked_list_t** tail, int value);
//void push_front(linked_list_t** head, int value);
//void insert_pos(linked_list_t** head, linked_list_t** tail, int pos, int value);
//void pop_back(linked_list_t* head,linked_list_t** tail);
//void pop_front(linked_list_t** head, linked_list_t* tail);
//void change_value_pos(linked_list_t* head, int value, int pos);
//void print_list(linked_list_t* head, linked_list_t* tail, int is_forwards);
void change_current_value(linked_list_t** current, int value);
void shift_value(linked_list_t** current, linked_list_t* tail, int value);

#endif //PRACTICE_LINKED_LIST_H
