//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:29 23 September 2019
// Finished at
// Time Taken:
// Known bugs:

#include "InputHandler.h"

Command* InputHandler::handleInput()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
	{
		return m_qBtn;
		//std::cout << "Q" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
	{
		return m_uBtn;
		//std::cout << "U" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
	{
		return m_bBtn;
		//std::cout << "B" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		return m_rBtn;
		//std::cout << "R" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
	{
		return m_tBtn;
		//std::cout << "T" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
	{
		return m_yBtn;
		//std::cout << "Y" << std::endl;
	}

}