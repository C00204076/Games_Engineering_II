//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:21 16 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

//
class Player : public Character
{
public:
	void draw()
	{
		std::cout << "Draw Player" << std::endl;
	}
};

#endif // !PLAYER_H
