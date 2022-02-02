#pragma once
#include "SDL.h"
#include "SDL_main.h"
#include "SDL_image.h"
#include "Entity.h"
#include <iostream>

class RenderWindow {
public:
	RenderWindow(const char* title, int w, int h);
	SDL_Texture* loadTexture(const char* filePath);
	~RenderWindow();
	void clearScreen();
	void render(Entity& entity);
	void display();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};