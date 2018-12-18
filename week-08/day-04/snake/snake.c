#include "snake.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>

void init_snake(snake_t** head, snake_t** tail){
    snake_t* first = (snake_t*) malloc(sizeof(snake_t));
    snake_t* second = (snake_t*) malloc(sizeof(snake_t));
    snake_t* third = (snake_t*) malloc(sizeof(snake_t));

    (*head)->next = first;
    (*head)->prev = NULL;
    (*tail)->next = NULL;
    (*tail)->prev = third;

    first->prev = (*head);
    first->next = second;
    first->x = 5;
    first->y = 0;
    SDL_Log("head: %p", (*head));
    SDL_Log("first: %p", first);

    second->prev = first;
    second->next = third;
    second->x = 4;
    second->y = 0;
    SDL_Log("second: %p", second);

    third->prev = second;
    third->next = (*tail);
    third->x = 3;
    third->y = 0;
    SDL_Log("third: %p", third);
    SDL_Log("tail: %p", (*tail));
}

void push_front(snake_t** head, int value){
    snake_t* new_element = (snake_t*) malloc(sizeof(snake_t));
    new_element->x = value;
    (*head)->next->prev = new_element;
    new_element->prev = *head;
    new_element->next = (*head)->next;
    (*head)->next = new_element;

}

void push_back(snake_t** tail, int x, int y){
    snake_t* new_element = (snake_t*) malloc(sizeof(snake_t));
    new_element->x = x;
    new_element->y = y;
    (*tail)->prev->next = new_element;
    new_element->next = *tail;
    new_element->prev = (*tail)->prev;
    (*tail)->prev = new_element;
}

void insert_pos(snake_t** head, snake_t** tail, int pos, int value){
        snake_t* it = *head;
        int i = 0;
        while (i != pos) {
            it = it->next;
            i++;
        }
        snake_t* new_element = (snake_t*) malloc(sizeof(snake_t));
        new_element->next = it;
        new_element->prev = it->prev;
        new_element->x = value;

        it->prev->next = new_element;
        it->prev = new_element;
        (*head)->x += 1;
}


void change_value_pos(snake_t* head, int value, int pos){
    if(pos > 0) {
        int i = 1;
        snake_t *it = head;

        while (it->next->next != NULL) {
            it = it->next;
            if (i == pos) {
                it->x = value;
                break;
            }
            i++;
        }
    } else{
        printf("Negative position! Changing the first x!\n");
        head->next->x = value;
    }
}

void pop_front(snake_t** head, snake_t* tail){
    if((*head)->next != tail){
        snake_t* temp = (*head)->next;
        (*head)->next = (*head)->next->next;
        temp->next->prev = *head;
        free(temp);
        (*head)->x -= 1;
    } else
        printf("The list is already empty!\n");
}

void pop_back(snake_t* head, snake_t** tail){
    if((*tail)->prev != head){
        snake_t* temp = (*tail)->prev;
        (*tail)->prev = (*tail)->prev->prev;
        temp->prev->next = *tail;
        free(temp);
        (*tail)->x -= 1;
    }else
        printf("The list is already empty!\n");
}

void change_current_value(snake_t** current, int x, int y){
    (*current)->x = x;
    (*current)->y = y;
}

void change_x_coordinate(snake_t** current, int change){
    ((*current)->x) += change;
}

void change_y_coordinate(snake_t** current, int change){
    ((*current)->y) += change;
}

int valid_move(snake_t* head, snake_t* tail, int x, int y){
    snake_t* it = head->next;
    if(x < 0 || x > 19 || y < 0 || y > 19)
        return 0;
    while (it != tail ){
        if((it->x == x && it->y == y)){
            SDL_Log("INVALID MOVE!");
            return 0;

        }
        it = it->next;
    }
    return 1;
}



void move_head(snake_t** head, snake_t* tail, direction_t direction){
    switch(direction){
        case DOWN : if(valid_move(*head, tail,(*head)->x, (*head)->y + 1)){
                change_y_coordinate(head, 1);
                move_body(&((*head)->next), tail, (*head)->x, (*head)->y);
        }
            break;
        case UP: if(valid_move(*head, tail, (*head)->x, (*head)->y - 1)){
                change_y_coordinate(head, -1);
                move_body(&((*head)->next), tail, (*head)->x, (*head)->y);
            }
            break;
        case LEFT: if(valid_move(*head, tail, (*head)->x - 1, (*head)->y)){
                change_x_coordinate(head, -1);
                move_body(&((*head)->next), tail, (*head)->x, (*head)->y);
            }
            break;
        case RIGHT: if(valid_move(*head, tail,(*head)->x + 1, (*head)->y)){
                change_x_coordinate(head, 1);
                move_body(&((*head)->next), tail, (*head)->x, (*head)->y);
            }
            break;
        default:
            break;
    }
}

void move_body(snake_t** current, snake_t* tail, int x, int y){
    if((*current) != tail) {
        int prev_x = (*current)->x;
        int prev_y = (*current)->y;

        SDL_Log("%p had this position: x: %d, y: %d", current, prev_x, prev_y);

        change_current_value(current, x, y);
        move_body(&((*current)->next), tail, prev_x, prev_y);
    } else
        SDL_Log("------------------------");
}

void draw_part(snake_t* current, SDL_Renderer* gRenderer){
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_Rect fillRect = {((current->x) * SIZE), ((current->y) * SIZE), SIZE, SIZE};
    SDL_RenderFillRect(gRenderer, &fillRect);
    //SDL_Log("%p has this position now: x: %d, y: %d", current, current->x, current->y);
}

void draw_snake(snake_t* head, snake_t* tail, SDL_Renderer* gRenderer){
    snake_t* it = head->next;

    while (it != tail){
        draw_part(it, gRenderer);
        it = it->next;
    }
}

void print_list(snake_t* head, snake_t* tail, int is_forwards){
    if(is_forwards){
        printf("Printing the list forwards:\n");
        snake_t* it = head;
        while (it->next != tail) {
            it = it->next;
            printf("%d ", it->x);
        }
        printf("\n");
    } else{
        printf("Printing the list backwards:\n");
        snake_t* it = tail;
        while (it->prev != head){
            it = it->prev;
            printf("%d ", it->x);
        }
        printf("\n");
    }
}