#include "../include/InitChess.h"


SDL_Window* Chess::InitChess::initWindow()
{
    SDL_Window* window;

    window = SDL_CreateWindow(
        "An SDL2 window",                  // window title
        SDL_WINDOWPOS_UNDEFINED,           // initial x position
        SDL_WINDOWPOS_UNDEFINED,           // initial y position
        640,                               // width, in pixels
        480,                               // height, in pixels
        SDL_WINDOW_OPENGL                  // flags - see below
    );

    return window;
}

SDL_Renderer* Chess::InitChess::initRenderer(SDL_Window* window)
{
    SDL_Renderer* renderer;

    renderer = SDL_CreateRenderer(window, -1, 0);
    return renderer;
}