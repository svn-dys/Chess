#pragma once
#include "SDL.h"

namespace Chess {
	class InitChess {
	public:
		static SDL_Window* initWindow();
		static SDL_Renderer* initRenderer(SDL_Window* window);

	private:
		
	};
}
