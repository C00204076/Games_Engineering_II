//
// C00204076
// Brandon Seah-Dempsey
// Started at 15:10 1 October 2019
// Finished at
// Time taken:
// Knonw bugs:


#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <SFML/Graphics.hpp>

#include "AnimatedSprite.h"
#include "Player.h"
#include "Input.h"
#include "Debug.h"
#include "Game.h"

/*using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}

	// Setup Players Default Animated Sprite
	AnimatedSprite animated_sprite(texture);
	animated_sprite.addFrame(sf::IntRect(3, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 3, 84, 84));

	// Setup the Player
	Player player(animated_sprite);
	Input input;
	
	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				// Close window : exit
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					input.setCurrent(Input::Action::LEFT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					input.setCurrent(Input::Action::RIGHT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					input.setCurrent(Input::Action::UP);
				}
				break;
			default:
				input.setCurrent(Input::Action::IDLE);
				break;
			}
		}

		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
};*/





Game *game = nullptr;

int main(int argc, char* argv[])
{
	const int m_fps = 60;
	const int m_frameDelay = 1000 / m_fps;

	Uint32 m_frameStart;
	int m_frameTime;


	DEBUG_MSG("Game Object Created");

	Game* game = new Game();
	//title, xpos, ypos, width, height, flags
	game->init("FSM Animation with SDL and Command Pattern",
	SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600,
	false);
	DEBUG_MSG("Game Initialised");

	DEBUG_MSG("Game Loop Starting......");
	while(game->isRunning())
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
	
	DEBUG_MSG("Calling Cleanup");
	game->clean();
	
	return 0;

}
//*/