#include <iostream>
#include <SDL.h>



//Screen dimension constants
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;

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

void draw(int centX, int centY, int width, int height)
{
    int w = SCREEN_WIDTH/3;
    int h = SCREEN_HEIGHT/3;
    //int offX = SCREEN_WIDTH-(i*SCREEN_WIDTH/3);
    //int offY = SCREEN_HEIGHT-(i*SCREEN_HEIGHT/3);
        if (width > 0) {
            SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
            SDL_Rect DrawRectL = {centX - (3 * width / 2), (centY - height / 2), width, height};
            SDL_RenderDrawRect(gRenderer, &DrawRectL);

            SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
            SDL_Rect DrawRectMU = {centX - (width / 2), centY - (3 * width / 2), width, height};
            SDL_RenderDrawRect(gRenderer, &DrawRectMU);

            SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
            SDL_Rect DrawRectMB = {centX - (width / 2), centY + (width / 2), width, height};
            SDL_RenderDrawRect(gRenderer, &DrawRectMB);

            SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
            SDL_Rect DrawRectR = {centX + (width / 2), (centY - height / 2), width, height};
            SDL_RenderDrawRect(gRenderer, &DrawRectR);

            draw(centX, centY - height, width/3, height/3);
            draw(centX, centY + height, width/3, height/3);
            draw(centX - width, centY, width/3, height/3);
            draw(centX + width, centY, width/3, height/3);
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


        int centerX = SCREEN_WIDTH / 2;
        int centerY = SCREEN_HEIGHT /2;
        int width = SCREEN_WIDTH /3;
        int height = SCREEN_HEIGHT / 3;
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0x00, 0xFF);
        SDL_Rect fillRect = { 0, 0, SCREEN_WIDTH, SCREEN_WIDTH};
        SDL_RenderFillRect( gRenderer, &fillRect );
        draw(centerX, centerY, width, height);

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}