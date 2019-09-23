//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:24 16 September 2019
// Finished at 
// Time taken:
// Known bugs:


#ifndef FACTORY_H
#define FACTORY_H

#include "Character.h"

#include <iostream>

//
class Factory
{
public:
	virtual Character* createPlayer() = 0;
	virtual Character* createBoss() = 0;
};

#endif // !FACTORY_H
