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
		m_qBtn->excute();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
	{
		m_uBtn->excute();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
	{
		m_bBtn->excute();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		m_rBtn->excute();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
	{
		m_tBtn->excute();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
	{
		m_yBtn->excute();
	}

}