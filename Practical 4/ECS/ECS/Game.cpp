//
// C00204076
// Brandon Seah-Dempsey
// Started at 11:06 17 October 2019
// Finished at
// Time taken:
// Known bugs:

#include "Game.h"

//
Game::Game()
{
	m_isRunning = false;
	m_renderer = SDL_CreateRenderer(m_window, -1, 0);
	m_window = SDL_CreateWindow("FSM Animation with SDL and Command Pattern",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);


	
}

//
Game::~Game()
{

}

//
void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	//
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		loadTexture();
		setECS();

		std::cout << "Initialising Subsystems..." << std::endl;
		//
		m_window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (m_window)
		{
			std::cout << "Window created!" << std::endl;
		}
		//
		m_renderer = SDL_CreateRenderer(m_window, -1, 0);
		if (m_renderer)
		{
			// Renderer, red, green, blue, alpha
			SDL_SetRenderDrawColor(m_renderer, 255, 255, 255, 255);
			std::cout << "Renderer created!" << std::endl;
		}

		m_isRunning = true;
	}
	//
	else
	{
		m_isRunning = false;
	}
}

//
void Game::loadTexture()
{
	//
	SDL_Surface* playerSurface = IMG_Load("ASSETS/Human.png");
	SDL_Surface* alienSurface = IMG_Load("ASSETS/Alien.png");
	SDL_Surface* dogSurface = IMG_Load("ASSETS/Dog.png");;
	SDL_Surface* catSurface = IMG_Load("ASSETS/Cat.png");;
	//
	m_playerText = SDL_CreateTextureFromSurface(m_renderer, playerSurface);
	m_alienText = SDL_CreateTextureFromSurface(m_renderer, alienSurface);
	m_dog = SDL_CreateTextureFromSurface(m_renderer, dogSurface);
	m_cat = SDL_CreateTextureFromSurface(m_renderer, catSurface);
	//
	m_playerRect = new SDL_Rect();
	m_playerRect->x = 0; m_playerRect->y = 0;
	m_playerRect->w = 50; m_playerRect->h = 50;
	//
	m_alienRect = new SDL_Rect();
	m_alienRect->x = 0; m_alienRect->y = 0;
	m_alienRect->w = 50; m_alienRect->h = 50;
	//
	m_dog = new SDL_Rect();
	m_dogRect->x = 0; m_dogRect->y = 0;
	m_dogRect->w = 50; m_dogRect->h = 50;
	//
	m_cat = new SDL_Rect();
	m_catRect->x = 0; m_catRect->y = 0;
	m_catRect->w = 50; m_catRect->h = 50;

}

//
void Game::setECS()
{
	m_player = new Entity();
	m_alien = new Entity();
	m_dog = new Entity();
	m_cat = new Entity();

	m_hc = HealthComponent(100);
	//m_pc
	//m_cc

	//
	m_player->addComponent(m_hc);
	m_player->addComponent(m_pc);
	m_player->addComponent(m_cc);
	//
	m_alien->addComponent(m_hc);
	m_alien->addComponent(m_pc);
	//
	m_dog->addComponent(m_hc);
	m_dog->addComponent(m_pc);
	//
	m_cat->addComponent(m_pc);

	//
	m_as.addEntity(m_alien);
	m_as.addEntity(m_dog);
	m_as.addEntity(m_cat);
	//
	m_rs.addEntity(m_player);
	m_rs.addEntity(m_alien);
	m_rs.addEntity(m_dog);
	m_rs.addEntity(m_cat);
	//
	m_cs.addEntity(m_player);
	//
	m_hs.addEntity(m_player);
	m_hs.addEntity(m_alien);
	m_hs.addEntity(m_dog);
}

//
void Game::handleEvents()
{
	SDL_Event m_event;
	SDL_PollEvent(&m_event);

	//
	switch (m_event.type)
	{
	case SDL_QUIT:
		m_isRunning = false;
		break;
	default:
		break;
	}

}

//
void Game::update()
{
	/*
	Entity player;

	HealthComponent hc; PositionComponent pc;

	player.addComponent(hc); player.addComponent(pc);

	HealthSystem hs; PositionSystem ps;

	hs.addEntity(player); ps.addEntity(player);

	while (true)
	{
		hs.update(); ps.update();
	}
	*/

	//
	m_as.update();
	m_rs.update();
	m_cs.update();
	m_hs.update();
}

//
void Game::render()
{
	SDL_RenderClear(m_renderer);
	// Stuff to render goes here

	

	SDL_RenderPresent(m_renderer);
}

//
void Game::clean()
{
	SDL_DestroyWindow(m_window);
	SDL_DestroyRenderer(m_renderer);
	SDL_Quit();
	std::cout << "Game Cleaned!" << std::endl;
}

//
bool Game::isRunning()
{
	return m_isRunning;
}