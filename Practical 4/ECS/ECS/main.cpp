//
// C00204076
// Brandon Seah-Demspey
// Started at 10:33 10 October 2019
// Finished at
// Time taken:
// Known bugs:

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "Game.h"

Game* game = nullptr;

int main(int argc, char* argv[])
{
	const int m_fps = 60;
	const int m_frameDelay = 1000 / m_fps;

	Uint32 m_frameStart;
	int m_frameTime;

	Game* game = new Game();
	//title, xpos, ypos, width, height, flags
	game->init("ECS",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600,
		false);

	while (game->isRunning())
	{
		//
		m_frameStart = SDL_GetTicks();
		//
		game->handleEvents();
		game->update();
		game->render();
		//
		m_frameTime = SDL_GetTicks() - m_frameStart;
		//
		if (m_frameDelay > m_frameTime)
		{
			SDL_Delay(m_frameDelay - m_frameTime);
		}
	}

	game->clean();

	return 0;
}