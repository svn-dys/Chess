#include <iostream>
//#include "../include/Board.h"
//#include "../include/Globals.h"
//
//void Board::CreateBoard()
//{
//    SDL_Rect r;
//    SDL_Texture* texture;
//    SDL_Event event;
//        
//    r.w = 100;
//    r.h = 50;
//
//    texture = SDL_CreateTexture(gRenderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, 1024, 768);
//
//    while (1) {
//        SDL_PollEvent(&event);
//        if (event.type == SDL_QUIT)
//            break;
//        r.x = rand() % 500;
//        r.y = rand() % 500;
//
//        SDL_SetRenderTarget(gRenderer, texture);
//        SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0x00);
//        SDL_RenderClear(gRenderer);
//        SDL_RenderDrawRect(gRenderer, &r);
//        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0x00);
//        SDL_RenderFillRect(gRenderer, &r);
//        SDL_SetRenderTarget(gRenderer, NULL);
//        SDL_RenderCopy(gRenderer, texture, NULL, NULL);
//        SDL_RenderPresent(gRenderer);
//    }
//}
