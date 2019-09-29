//
// C00204076
// Brandon Seah-Dempsey
// Started at 15:28 25 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

#include "InputHandler.h"
#include "MarcoCommand.h"

#include <iostream>
#include <string>
#include <vector>

// Game class
class Game
{
public:
	Game();
	~Game();

	void run();

	void setString(char c);

private:
	void loadTextures();
	void initialise();

	void processEvents(); //Process all game events
	void processGameEvents(sf::Event&);
	void processInput();
	void update(sf::Time deltaTime); //Update game objects
	void render(); //Draw objects to screen

	sf::RenderWindow m_window; //SFML window for game
	bool is_running;

	InputHandler *input;
	MarcoCommand* m_macro;

	std::string m_word;
};

#endif // !GAME_H