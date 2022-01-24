#pragma once
#include "SDL.h"
#include "SDL_main.h"
#include "SDL_image.h"
#include <iostream>


class RenderWindow {
public:
	/*void initWindow();
	void initRenderer();*/

	RenderWindow(const char* title, int w, int h);
	SDL_Texture* loadTexture(const char* filePath);
	~RenderWindow();
	void clearScreen();
	void render(SDL_Texture* texture);
	void display();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};