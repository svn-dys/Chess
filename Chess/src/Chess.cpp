#include "SDL.h"
#undef main
#include <iostream>
#include "../include/RenderWindow.h"

int main() 
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't initialize SDL: %s", SDL_GetError());
        return 3;
    }
    RenderWindow window("Chess", 1280, 720);

    SDL_Texture* horse = window.loadTexture("sprites/horsey.png");

    bool chessRunning = true;

    SDL_Event event;

    while (chessRunning)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                chessRunning = false;
            }
        }

        window.clearScreen();
        window.render(horse);
        window.display();
    }

    window.~RenderWindow();
    SDL_Quit();
    return 0;
}



//InitChess::initWindow();
    //InitChess::initRenderer();
    /*Board* board = new Board;
    board->CreateBoard();
    
    #include "../include/Board.h"
    */