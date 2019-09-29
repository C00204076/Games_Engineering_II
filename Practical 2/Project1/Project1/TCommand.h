//
// C00204076
// Brandon Seah-Dempsey
// Started at 14:53 28 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef TCOMMAND_H
#define TCOMMAND_H

#include "Command.h"

//
class TCommand : public Command
{
public:
	virtual void execute(Command* c, Game* game)
	{
		c->t(game);
	}
};

#endif // !TCOMMAND_H
