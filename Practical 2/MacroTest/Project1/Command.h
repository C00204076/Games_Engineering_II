// C00204076
// Brandon Seah-Dempsey
// Started at 20:25 29 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>

class Command
{
public:
	virtual void execute(int&) = 0;
};

#endif // !COMMAND_H
