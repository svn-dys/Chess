#pragma once
#include "SDL.h"

namespace Chess {
	static SDL_Window* gWindow;
	static SDL_Renderer* gRenderer;

	class InitChess {
	public:
		static void initWindow();
		static void initRenderer();


		~InitChess();
	private:

	};

	
}
