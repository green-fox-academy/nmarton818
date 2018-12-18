#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

void init_list(linked_list_t** head, linked_list_t** tail){
    (*head)->next = *tail;
    (*head)->prev = NULL;
    (*tail)->next = NULL;
    (*tail)->prev = *head;
    (*head)->value = 0;
    (*tail)->value = 0;
}

void push_front(linked_list_t** head, int value){
    linked_list_t* new_element = (linked_list_t*) malloc(sizeof(linked_list_t));
    new_element->value = value;
    (*head)->next->prev = new_element;
    new_element->prev = *head;
    new_element->next = (*head)->next;
    (*head)->next = new_element;
    (*head)->value += 1;

}

void push_back(linked_list_t** tail, int value){
    linked_list_t* new_element = (linked_list_t*) malloc(sizeof(linked_list_t));
    new_element->value = value;
    (*tail)->prev->next = new_element;
    new_element->next = *tail;
    new_element->prev = (*tail)->prev;
    (*tail)->prev = new_element;
    (*tail)->value += 1;
}

void insert_pos(linked_list_t** head, linked_list_t** tail, int pos, int value){
    int sum = (*head)->value + (*tail)->value;
    if(pos < 0) {
        printf("Negative position! Inserting to the first position!\n");
        push_front(head, value);
    }
    else if(pos > sum){
        printf("There aren't this many elements in this list! Inserting to last position!\n");
        push_back(tail, value);
    }
    else{
        linked_list_t* it = *head;
        int i = 0;
        while (i != pos) {
            it = it->next;
            i++;
        }
        linked_list_t* new_element = (linked_list_t*) malloc(sizeof(linked_list_t));
        new_element->next = it;
        new_element->prev = it->prev;
        new_element->value = value;

        it->prev->next = new_element;
        it->prev = new_element;
        (*head)->value += 1;
    }
}

void change_value_pos(linked_list_t* head, int value, int pos){
    if(pos > 0) {
        int i = 1;
        linked_list_t *it = head;

        while (it->next->next != NULL) {
            it = it->next;
            if (i == pos) {
                it->value = value;
                break;
            }
            i++;
        }
    } else{
        printf("Negative position! Changing the first value!\n");
        head->next->value = value;
    }
}

void pop_front(linked_list_t** head, linked_list_t* tail){
    if((*head)->next != tail){
        linked_list_t* temp = (*head)->next;
        (*head)->next = (*head)->next->next;
        temp->next->prev = *head;
        free(temp);
        (*head)->value -= 1;
    } else
        printf("The list is already empty!\n");
}

void pop_back(linked_list_t* head, linked_list_t** tail){
    if((*tail)->prev != head){
        linked_list_t* temp = (*tail)->prev;
        (*tail)->prev = (*tail)->prev->prev;
        temp->prev->next = *tail;
        free(temp);
        (*tail)->value -= 1;
    }else
        printf("The list is already empty!\n");
}

void change_current_value(linked_list_t** current, int value){
    (*current)->value = value;
}

void shift_value(linked_list_t** current, linked_list_t* tail, int value){
    if((*current) != tail) {
        int prev_value = (*current)->value;
        change_current_value(current, value);
        shift_value(&((*current)->next), tail, prev_value);
    }
}

void print_list(linked_list_t* head, linked_list_t* tail, int is_forwards){
    if(is_forwards){
        printf("Printing the list forwards:\n");
        linked_list_t* it = head;
        while (it->next != tail) {
            it = it->next;
            printf("%d ", it->value);
        }
        printf("\n");
    } else{
        printf("Printing the list backwards:\n");
        linked_list_t* it = tail;
        while (it->prev != head){
            it = it->prev;
            printf("%d ", it->value);
        }
        printf("\n");
    }
}