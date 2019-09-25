//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:29 23 September 2019
// Finished at
// Time Taken:
// Known bugs:

#include "InputHandler.h"

void InputHandler::handleInput()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
	{
		//m_qBtn->excute();
		std::cout << "Q" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
	{
		//m_uBtn->excute();
		std::cout << "U" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
	{
		//m_bBtn->excute();
		std::cout << "B" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		//m_rBtn->excute();
		std::cout << "R" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
	{
		//m_tBtn->excute();
		std::cout << "T" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
	{
		//m_yBtn->excute();
		std::cout << "Y" << std::endl;
	}

}