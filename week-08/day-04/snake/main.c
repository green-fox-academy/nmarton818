#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include "snake.h"
#include "apple.h"



//Draws geometry on the canvas
    void draw();


//Starts up SDL and creates window
    int init();

//Frees media and shuts down SDL
    void close();

//The window we'll be rendering to
    SDL_Window* gWindow = NULL;

//The window renderer
    SDL_Renderer* gRenderer = NULL;

    void draw() {
        //choose color
        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
        //create a rectangle
        for (int i = 0; i < 3; i++) {

                    SDL_Rect fillRect = {i * SIZE, 0 * SIZE, 25, 25};
                    SDL_RenderFillRect(gRenderer, &fillRect);
                }
            // draw a red horizontal line to the canvas' middle.
            // draw a green vertical line to the canvas' middle.
    }
    int init()
    {
        //Initialize SDL
        if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
        {
            //std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
            printf("SDL could not initialize! SDL Error: %d\n", SDL_GetError());
            return 0;
        }

        //Create window
        gWindow = SDL_CreateWindow( "Line in the middle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( gWindow == NULL )
        {
            //std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
            return 0;
        }

        //Create renderer for window
        gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
        if( gRenderer == NULL )
        {
            //std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
            return 0;
        }

        //Initialize renderer color
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

        return 1;
    }

    void close()
    {
        //Destroy window
        SDL_DestroyRenderer( gRenderer );
        SDL_DestroyWindow( gWindow );
        gWindow = NULL;
        gRenderer = NULL;

        SDL_Quit();
    }

    int main( int argc, char* args[] )
    {
        //Start up SDL and create window
        if( !init() )
        {
            //std::cout << "Failed to initialize!" << std::endl;
            close();
            return -1;
        }

        //Main loop flag
        int quit = 0;

        //Event handler
        SDL_Event e;

        snake_t* head = (snake_t*) malloc(sizeof(snake_t));
        snake_t* tail = (snake_t*) malloc(sizeof(snake_t));

        init_snake(&head, &tail);


        //While application is running
        while( !quit ) {
            //Handle events on queue
            while (SDL_PollEvent(&e) != 0) {
                //User requests quit
                if (e.type == SDL_QUIT) {
                    quit = 1;
                } else if (e.type == SDL_KEYDOWN) {

                    switch (e.key.keysym.sym) {
                        case SDLK_UP:
                            move_head(&head, tail, UP);
                            break;
                        case SDLK_DOWN:
                            move_head(&head, tail, DOWN);
                            break;
                        case SDLK_LEFT:
                            move_head(&head, tail, LEFT);
                            break;
                        case SDLK_RIGHT:
                            move_head(&head, tail, RIGHT);
                            break;
                        default:
                            break;
                    }
                    //draw_snake(head, tail, gRenderer);
                }
            }

            //Clear screen
            SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
            SDL_RenderClear(gRenderer);
            //draw();
            draw_snake(head, tail, gRenderer);


            //Update screen
            SDL_RenderPresent(gRenderer);
        }

        //Free resources and close SDL
        close();

        return 0;
}