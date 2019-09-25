//
// C00204076
// Brandon Seah-Dempsey
// Started at 15:30 25 September 2019
// Finished at
// Time taken:
// Known bugs:

#include "Game.h"

/// <summary>
/// Default constructor
/// </summary>
Game::Game() :
	m_window{ sf::VideoMode{ 1500, 900, 32 }, "Command Pattern" },
	is_running{ true } // When false, game will exit
{
	initialise();
}

/// <summary>
/// Default deconstructor
/// </summary>
Game::~Game()
{
	std::cout << "Game object destroyed" << std::endl;
}

//
void Game::loadTextures()
{

}

//
void Game::initialise()
{
	loadTextures();

	
}

/// <summary>
/// Calls all methods needed to run game, such as update and render
/// </summary>
void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.f / 60.f);
	while (m_window.isOpen())
	{
		processEvents();
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			//timeSinceLastUpdate -= timePerFrame;
			processEvents();
			update(timeSinceLastUpdate);
			timeSinceLastUpdate = sf::Time::Zero;
		}

		render();
	}
}

/// <summary>
/// 
/// </summary>
void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (sf::Event::Closed == event.type)
		{
			m_window.close();
		}
		if (sf::Event::KeyPressed == event.type)
		{
			if (sf::Keyboard::Escape == event.key.code)
			{
				is_running = false;
			}
		}
		processGameEvents(event);
	}
}

/// <summary>
/// Detect and handle keyboard input.
/// </summary>
/// <param name=""></param>
void Game::processGameEvents(sf::Event& event)
{
	//Check if the event is a mouse release event

	switch (event.type)
	{
	case sf::Event::KeyPressed:
		//m_keyhandler.updateKey(event.key.code, true);
		break;
	case sf::Event::KeyReleased:
		//m_keyhandler.updateKey(event.key.code, false);
		break;
	default:
		break;
	}
}

/// <summary>
///  
/// </summary>
void Game::processInput()
{
	sf::Event event;

	while (m_window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			m_window.close();
			break;
		default:
			break;
		}

		
	}
}

/// <summary>
/// Calls and updates any method of game objects needed for gameplay
/// </summary>
/// <param name="t_deltaTime"></param>
void Game::update(sf::Time deltaTime)
{
	if (!is_running)
	{
		m_window.close();
	}

	

	input.handleInput();
}

/// <summary>
/// Renders and draws the Sprites of the different game object sprites
/// </summary>
void Game::render()
{
	m_window.clear(sf::Color::Black); //Set background to black

	

	m_window.display();
}

