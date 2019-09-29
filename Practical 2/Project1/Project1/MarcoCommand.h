//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:56 23 Septmeber 2019
// Finished at 
// Time taken:
// Known bugs:

#ifndef MARCOCOMMAND_H
#define MARCOCOMMAND_H

#include "Command.h"

class MarcoCommand : public Command
{
public:
	MarcoCommand();
	virtual ~MarcoCommand();
	virtual void add(Command*);
	virtual void remove(Command*);
	virtual void execute(Game *game);

private:
	std::list<Command*>* m_commands;
};

#endif // !MARCOCOMMAND_H
