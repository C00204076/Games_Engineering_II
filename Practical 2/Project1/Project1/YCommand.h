//
// C00204076
// Brandon Seah-Dempsey
// Started at 14:53 28 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef YCOMMAND_H
#define YCOMMAND_H

#include "Command.h"

//
class YCommand : public Command
{
public:
	virtual void execute(Command* c, Game * game)
	{
		c->y(game);
	}
};

#endif // !YCOMMAND_H