//
// C00204076
// Brandon Seah-Dempsey
// Started at 20:28 29 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include <vector>

#include "Command.h"

//
class MacroCommand : public Command
{
	std::vector< Command* > list;
public:
	void add(Command* cmd)
	{
		list.push_back(cmd);
	}
	
	void execute(int& num)
	{
		for (int i = 0; i < list.size(); i++)
			list[i]->execute(num);
	}
};

#endif // !MACROCOMMAND_H
