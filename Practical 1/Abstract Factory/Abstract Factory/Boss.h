//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:23 19 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef BOSS_H
#define BOSS_H

#include "Character.h"

//
class Boss : public Character
{
public:
	void draw()
	{
		std::cout << "Draw Boss" << std::endl;
	}
};

#endif // !BOSS_H

