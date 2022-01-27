#include "../include/RenderWindow.h"



RenderWindow::RenderWindow(const char* title, int w, int h)
	:window(NULL), renderer(NULL)
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

void RenderWindow::render(Entity& entity)
{
	SDL_Rect src;
	src.x = entity.getCurrentFrame().x;
	src.y = entity.getCurrentFrame().y;
	src.w = entity.getCurrentFrame().w;
	src.h = entity.getCurrentFrame().h;

	SDL_Rect dst;
	dst.x = entity.getX() * 2;
	dst.y = entity.getY() * 2;
	dst.w = entity.getCurrentFrame().w * 2;
	dst.h = entity.getCurrentFrame().h * 2;

	SDL_RenderCopy(renderer, entity.getTexture(), &src, &dst);
}

void RenderWindow::display()
{
	SDL_RenderPresent(renderer);
}

RenderWindow::~RenderWindow()
{
	SDL_DestroyWindow(window);
}