#include <iostream>
#include <SDL.h>
#include <time.h>
#include <chrono>
#include <SDL_log.h>
#include <math.h>

enum Color{
    RED,
    GREEN,
    BLUE
};

enum Operation{
    INCREMENT,
    DECREMENT
};
void drawSquares(int size, int colors[]);

void drawRainbowSquares(int colors[], enum Color color, enum Operation operation, int& size){
    int change = 20;
    int c = time(NULL) % 20;
    colors[RED] = abs(colors[RED]);
    colors[GREEN] = abs(colors[GREEN]);
    colors[BLUE] = abs(colors[BLUE]);
    SDL_Log("r: %d g: %d b: %d    c: %d", colors[RED], colors[GREEN], colors[BLUE], c);
    switch(operation){
        case INCREMENT: {

            while (colors[color] < 230 && size > 4) {
                drawSquares(size, colors);
                colors[color] = colors[color] + change - c;
                size--;
            }
            break;
        }
        case DECREMENT: {
            while (colors[color] > 0 && size > 4 && colors[color] <= 250) {
                drawSquares(size, colors);
                colors[color] = colors[color] - change + c;
                size--;
            }
            break;
        }
    }
}

//Screen dimension constants
const int SCREEN_WIDTH = 710;
const int SCREEN_HEIGHT = 710;

//Draws geometry on the canvas
void draw();

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window* gWindow = nullptr;

//The window renderer
SDL_Renderer* gRenderer = nullptr;

void drawSquares(int size, int colors[])
{
    // Create a square drawing function that takes 2 parameters:
    // The square size, and the fill color,
    // and draws a square of that size and color to the center of the canvas.
    // Create a loop that fills the canvas with rainbow colored squares.
    //choose color
    SDL_SetRenderDrawColor(gRenderer, colors[RED], colors[GREEN], colors[BLUE], 255);
    //create a rectangle
    SDL_Rect fillRect = { (SCREEN_WIDTH/2) - (size/2), (SCREEN_HEIGHT/2) - (size/2), size, size};
    //draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect);
}

bool init()
{
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow( "Rainbow box function", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( gWindow == nullptr )
    {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
    if( gRenderer == nullptr )
    {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main( int argc, char* args[] )
{


    //Start up SDL and create window
    if( !init() )
    {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while( !quit ) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);



        int colorArray[3] = {0, 0, 0};
        int size = 600;

        //1 3 2 6 4 5 7
        //0inc 1inc 2dec 3inc 4dec 5inc 6inc
        //red green red blue green red green
        //  0    1   0   2    1    0   2
        //  0    0   1   0    0    0   1

        //for(long int k = 0; k < 100; k++) {
        //for (long int j = 0; j < 10000; j++) {
            drawRainbowSquares(colorArray, RED, INCREMENT, size);
            drawRainbowSquares(colorArray, GREEN, INCREMENT, size);
            drawRainbowSquares(colorArray, RED, DECREMENT, size);
            drawRainbowSquares(colorArray, BLUE, INCREMENT, size);
            drawRainbowSquares(colorArray, GREEN, DECREMENT, size);
            drawRainbowSquares(colorArray, RED, INCREMENT, size);
            drawRainbowSquares(colorArray, GREEN, INCREMENT, size);

            drawRainbowSquares(colorArray, GREEN, DECREMENT, size);
            drawRainbowSquares(colorArray, RED, DECREMENT, size);
            drawRainbowSquares(colorArray, GREEN, INCREMENT, size);
            drawRainbowSquares(colorArray, BLUE, DECREMENT, size);
            drawRainbowSquares(colorArray, RED, INCREMENT, size);
            drawRainbowSquares(colorArray, GREEN, DECREMENT, size);
            drawRainbowSquares(colorArray, RED, DECREMENT, size);














        //Update screen
        SDL_RenderPresent(gRenderer);
    }
    //Free resources and close SDL
    close();

    return 0;
}