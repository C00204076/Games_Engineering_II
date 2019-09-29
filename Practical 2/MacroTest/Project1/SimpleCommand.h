//
// C00204076
// Brandon Seah-Dempsey
// Started at 20:26 29 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef SIMPLECOMMAND_H
#define SIMPLECOMMAND_H

#include "Number.h"
#include "Command.h"

//
class SimpleCommand : public Command
{
	typedef void(Number::* Action)(int&);
	Number* receiver;
	Action action;
public:
	SimpleCommand(Number* rec, Action act)
	{
		receiver = rec;
		action = act;
	}

	void execute(int& num)
	{
		(receiver->*action)(num);
	}
};

#endif // !SIMPLECOMMAND_H
