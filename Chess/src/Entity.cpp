#include "../include/Entity.h"

Entity::Entity(Vector2f m_position, SDL_Texture* p_texture)
	:position(m_position), texture(p_texture)
{
	currentFrame.x = 0;
	currentFrame.y = 0;
	currentFrame.w = 167;
	currentFrame.h = 179;
}


SDL_Texture* Entity::getTexture()
{
	return texture;
}

SDL_Rect Entity::getCurrentFrame()
{
	return currentFrame;
}