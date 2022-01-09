#include "SDL.h"
#undef main
#include <iostream>
#include "../include/InitChess.h"
#include "../include/Board.h"

using namespace Chess;


int main() 
{
    InitChess::initWindow();
    InitChess::initRenderer();
    Board board;
    board.CreateBoard();

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't initialize SDL: %s", SDL_GetError());
        return 3;
    }

    SDL_DestroyRenderer(gRenderer);
    SDL_Quit();
    return 0;
}