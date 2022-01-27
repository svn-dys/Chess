#pragma once
#include <SDL.h>
#include <SDL_image.h>

class Entity 
{
public:
	Entity(float x, float y, SDL_Texture* texture);
	float getX();
	float getY();
	SDL_Texture* getTexture();
	SDL_Rect getCurrentFrame();
private:
	double x, y;
	SDL_Rect currentFrame;
	SDL_Texture* texture;
};