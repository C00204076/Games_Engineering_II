//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:26 16 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef CHARACTERFACTORY_H
#define CHARACTERFACTORY_H

#include "Player.h"
#include "Boss.h"
#include "Factory.h"

//
class CharacterFactory : public Factory
{
public:
	//
	Character* createPlayer()
	{
		return new Player;
	}

	//
	Character* createBoss()
	{
		return new Boss;
	}
};

#endif // !CHARACTERFACTORY_H
