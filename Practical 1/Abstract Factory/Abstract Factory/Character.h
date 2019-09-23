//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:18 16 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

//
class Character
{
public:
	Character(){}
	virtual ~Character(){}
	virtual void draw() = 0;
};

#endif // !CHARACTER_H