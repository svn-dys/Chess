#include "../include/InitChess.h"


void Chess::InitChess::initWindow()
{
    SDL_Window* createdWindow;
    
    createdWindow = SDL_CreateWindow(
        "An SDL2 window",                  // window title
        SDL_WINDOWPOS_UNDEFINED,           // initial x position
        SDL_WINDOWPOS_UNDEFINED,           // initial y position
        640,                               // width, in pixels
        480,                               // height, in pixels
        SDL_WINDOW_OPENGL                  // flags - see below
    );

    // assign created window to global window
    Chess::gWindow = createdWindow;
}

void Chess::InitChess::initRenderer()
{
    SDL_Renderer* createdRenderer;
    createdRenderer = SDL_CreateRenderer(Chess::gWindow, -1, 0);

    // assign created render to global renderer
    Chess::gRenderer = createdRenderer; 
}
