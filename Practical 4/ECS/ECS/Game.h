//
// C00204076
// Brandon Seah-Dempsey
// Started at 11:04 17 October 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include <SDL_image.h>

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
	void setECS();
	void loadTexture();

	bool m_isRunning;
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;

	SDL_Texture* m_playerText;
	SDL_Texture* m_alienText;
	SDL_Texture* m_dogText;
	SDL_Texture* m_catText;

	SDL_Rect* m_playerRect;
	SDL_Rect* m_alienRect;
	SDL_Rect* m_dogRect;
	SDL_Rect* m_catRect;

	Entity *m_player;
	Entity *m_alien;
	Entity *m_dog;
	Entity *m_cat;
	//
	HealthComponent m_hc = HealthComponent(100);
	PositionComponent m_pc;
	ControlComponent m_cc;
	//
	AISystem m_as;
	RenderSystem m_rs;
	ControlSystem m_cs;
	HealthSystem m_hs;

};
#include "Entity.h"
//
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "ControlComponent.h"
//
#include "AISystem.h"
#include "RenderSystem.h"
#include "ControlSystem.h"
#include "HealthSystem.h"
#endif // !GAME_H