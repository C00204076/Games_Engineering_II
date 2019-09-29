//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:05 23 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <list>

#include "SFML/Graphics.hpp"

class Game;

//
class Command
{
public:
	virtual ~Command()
	{

	}

	virtual void execute() = 0;
	virtual void execute(Command* c, Game *game) = 0;

	//
	void q(Game *game)
	{
		if (m_addQ == false)
		{
			char c = 'Q';
			game->setString(c);
			m_addQ = true;
		}
	}

	//
	void u(Game *game)
	{
		if (m_addU == false)
		{
			char c = 'U';
			game->setString(c);
			m_addU = true;
		}
	}

	//
	void b(Game *game)
	{
		if (m_addB == false)
		{
			char c = 'B';
			game->setString(c);
			m_addB = true;
		}
	}

	//
	void r(Game *game)
	{
		if (m_addR == false)
		{
			char c = 'R';
			game->setString(c);
			m_addR = true;
		}
	}

	//
	void t(Game *game)
	{
		if (m_addT == false)
		{
			char c = 'T';
			game->setString(c);
			m_addT = true;
		}
	}

	//
	void y(Game *game)
	{
		if (m_addY == false)
		{
			char c = 'Y';
			game->setString(c);
			m_addY = true;
		}
	}

protected:
	Command()
	{
		m_addQ = false;
		m_addU = false; 
		m_addB = false;
		m_addR = false; 
		m_addT = false; 
		m_addY = false;
	}

private:
	bool m_addQ, m_addU, m_addB, m_addR, m_addT, m_addY;
};

#include "Game.h"
#endif // !COMMAND_H

