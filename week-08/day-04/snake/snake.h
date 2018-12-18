#ifndef EX_01_LINE_IN_THE_MIDDLE_SNAKE_H
#define EX_01_LINE_IN_THE_MIDDLE_SNAKE_H

#include <SDL.h>

#define SIZE 25
#define SCREEN_HEIGHT 500
#define SCREEN_WIDTH 500

typedef enum direction{
    LEFT,
    RIGHT,
    UP,
    DOWN
}direction_t;

typedef struct snake{
    int x;
    int y;
    struct snake* next;
    struct snake* prev;
}snake_t;

void init_snake(snake_t** head, snake_t** tail);
void push_back(snake_t** tail, int x, int y);
void push_front(snake_t** head, int value);
void insert_pos(snake_t** head, snake_t** tail, int pos, int value);
void pop_back(snake_t* head,snake_t** tail);
void pop_front(snake_t** head, snake_t* tail);
void change_value_pos(snake_t* head, int value, int pos);
void print_list(snake_t* head, snake_t* tail, int is_forwards);
void change_x_coordinate(snake_t** current, int change);
void change_y_coordinate(snake_t** current, int change);
void change_current_value(snake_t** current, int x, int y);
void move_body(snake_t** current, snake_t* tail, int x, int y);
void move_head(snake_t** head, snake_t* tail, direction_t direction);
int valid_move(snake_t* head, snake_t* tail, int x, int y);

void draw_part(snake_t* current, SDL_Renderer* gRenderer);
void draw_snake(snake_t* head, snake_t* tail, SDL_Renderer* gRenderer);
#endif //EX_01_LINE_IN_THE_MIDDLE_SNAKE_H
