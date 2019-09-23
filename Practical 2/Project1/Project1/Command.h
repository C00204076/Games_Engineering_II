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

//
class Command
{
public:
	virtual ~Command()
	{

	}

	virtual void excute() = 0;

protected:
	Command()
	{

	}
};

#endif // !COMMAND_H

