#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main() {
    linked_list_t* head = (linked_list_t*) malloc(sizeof(linked_list_t));
    linked_list_t* tail = (linked_list_t*) malloc(sizeof(linked_list_t));

    init_list(&head, &tail);
    push_front(&head, 5);
    push_front(&head, 4);
    push_front(&head, 3);
    push_front(&head, 2);
    push_front(&head, 1);
    push_back(&tail, 6);
    push_back(&tail, 7);
    push_back(&tail, 8);
    insert_pos(&head, &tail, 4, 99);
    insert_pos(&head, &tail, 100, 100);
    insert_pos(&head, &tail, -1, 100);
    change_value_pos(head, 888, -1);
    pop_front(&head, tail);
    pop_front(&head, tail);
    pop_front(&head, tail);
    pop_front(&head, tail);
    pop_back(head, &tail);
    shift_value(&head->next, tail, 0);
    print_list(head, tail, 1);
    shift_value(&head->next, tail, 0);
    print_list(head, tail, 1);
    shift_value(&head->next, tail, 0);
    print_list(head, tail, 1);








    return 0;
}