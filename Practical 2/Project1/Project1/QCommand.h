//
// C00204076
// Brandon Seah-Dempsey
// Started at 14:52 28 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef QCOMMAND_H
#define QCOMMAND_H

#include "Command.h"

class QCommand : public Command
{
public:
	virtual void execute(Command* c, Game* game)
	{
		c->q(game);
	}
};

#endif // !QCOMMAND_H
