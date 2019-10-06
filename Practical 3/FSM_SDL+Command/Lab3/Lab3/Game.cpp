//
// C00204076
// Brandon Seah-Dempsey
// Started at 15:21 1 October 2019
// Finished at
// Time taken:
// Knonw bugs:

#include "Game.h"

//
Game::Game()
{
	m_isRunning = false;
	m_renderer = SDL_CreateRenderer(m_window, -1, 0);
	m_window = SDL_CreateWindow("FSM Animation with SDL and Command Pattern",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);


	m_input = Input();
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
	SDL_Texture* image = IMG_LoadTexture(m_renderer, "assets\\grid.png");

	if (image == nullptr)
	{
		std::cout << "IMG_Load: " << IMG_GetError() << "\n";
	}
	else
	{

		m_animatedSprite = AnimatedSprite(image);

		//
		m_frames[0].x = 3;
		m_frames[0].y = 3;
		m_frames[0].w = 84;
		m_frames[0].h = 84;
		m_animatedSprite.addFrame(m_frames[0]);
		//
		m_frames[1].x = 88;
		m_frames[1].y = 3;
		m_frames[1].w = 84;
		m_frames[1].h = 84;
		m_animatedSprite.addFrame(m_frames[1]);
		//
		m_frames[2].x = 173;
		m_frames[2].y = 3;
		m_frames[2].w = 84;
		m_frames[2].h = 84;
		m_animatedSprite.addFrame(m_frames[2]);
		//
		m_frames[3].x = 258;
		m_frames[3].y = 3;
		m_frames[3].w = 84;
		m_frames[3].h = 84;
		m_animatedSprite.addFrame(m_frames[3]);
		//
		m_frames[4].x = 343;
		m_frames[4].y = 3;
		m_frames[4].w = 84;
		m_frames[4].h = 84;
		m_animatedSprite.addFrame(m_frames[4]);
		//
		m_frames[5].x = 428;
		m_frames[5].y = 3;
		m_frames[5].w = 84;
		m_frames[5].h = 84;
		m_animatedSprite.addFrame(m_frames[5]);

		//
		m_player = new Player(m_animatedSprite);
	}

	
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

	switch (m_event.type == SDL_KEYDOWN)
	{
		// Left key pressed 
		if (m_event.key.keysym.sym == SDLK_LEFT)
		{
			m_input.setCurrent(Input::Action::LEFT);
		}
		//  Right key pressed
		if (m_event.key.keysym.sym == SDLK_RIGHT)
		{
			m_input.setCurrent(Input::Action::RIGHT);
		}
		// Up key pressed
		if (m_event.key.keysym.sym == SDLK_UP)
		{
			m_input.setCurrent(Input::Action::UP);
		}
		//
		else
		{
			m_input.setCurrent(Input::Action::IDLE);
		}
	}
}

//
void Game::update()
{
	m_player->handleInput(m_input);
	m_player->update();
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