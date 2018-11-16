#include <iostream>
#include <SDL.h>
#include <SDL2_gfxPrimitives.h>

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 640;

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

void draw(int x1, int y1, int x2, int y2, int x3, int y3, int depth) {
    if(depth < 7) {
        int a = x1;
        int b = ((x2-x1)/2) + x1;
        int c = x2;
        int d = x1+((x2-x1)/4);
        int e = x1+(3*(x2-x1)/4);
        int f = x3;
        trigonRGBA(gRenderer, x1, y1, x2, y2, x3, y3, 0x00, 0x00, 0x00, 0xFF);
        //draw(a, y1, b, y2, d, y3/2, depth + 1);
        //draw(b, y1, c, y2, e, y3/2, depth + 1);
        //draw(d, y3 - y1, e, y3 - y2, b, y3, depth +1);

        draw( b, y1, c, y2, e, (y2 + (y3 - y2) / 2), depth + 1);
        draw( a, y1, b, y1, d, (y2 + (y3 - y2) / 2), depth + 1);
        draw( d, (y2 + (y3 - y2) / 2), e, (y2 + (y3 - y2) / 2), f, y3, depth + 1);
       //draw(x1+((x2-x1)/4), y3/2, x1+(3*(x2-x1)/4), y3/2, (x2-x1)/2 + x1, y3, depth+1);
    }

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
    gWindow = SDL_CreateWindow( "Line in the middle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
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

        draw(0,0, SCREEN_WIDTH, 0, SCREEN_WIDTH/2, SCREEN_HEIGHT, 0);

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}