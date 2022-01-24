#include "../include/RenderWindow.h"



RenderWindow::RenderWindow(const char* title, int w, int h)
{
	window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, w, h, SDL_RENDERER_ACCELERATED);

	if (window == NULL)
	{
		std::cout << "Window failed. Error:" << SDL_GetError() << std::endl;
	}

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

SDL_Texture* RenderWindow::loadTexture(const char* filePath)
{
	SDL_Texture* texture = NULL;
	texture = IMG_LoadTexture(renderer, filePath);

	if (texture == nullptr)
	{
		std::cout << "Failed to load texture... Error: " << SDL_GetError() << std::endl;
	}

	return texture;
}

void RenderWindow::clearScreen() 
{
	SDL_RenderClear(renderer);
}

void RenderWindow::render(SDL_Texture* texture)
{
	SDL_RenderCopy(renderer, texture, NULL, NULL);
}

void RenderWindow::display()
{
	SDL_RenderPresent(renderer);
}

RenderWindow::~RenderWindow()
{
	SDL_DestroyWindow(window);
}