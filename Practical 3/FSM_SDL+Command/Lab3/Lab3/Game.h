//
// C00204076
// Brandon Seah-Dempsey
// Started at 15:10 1 October 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include <SDL_image.h>
#include "AnimatedSprite.h"
#include "Input.h"

#include <stdio.h>
#include <iostream>

class Player;

class Game
{
public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

	void handleEvents();
	void update();
	void render();
	void clean();

	bool isRunning();

private:
	void loadTexture();

	bool m_isRunning;
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;
	SDL_Texture* m_image;

	SDL_Rect m_frames[6];
	AnimatedSprite m_animatedSprite;
	Player* m_player;
	Input m_input;
};

#include "Player.h"
#endif // !GAME_H
