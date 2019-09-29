//
// C00204076
// Brandon Seah-Dempsey
// Started at 25 September 2019
// Finished at 
// Time taken:
// Known bugs:

#include "MarcoCommand.h"

//
MarcoCommand::MarcoCommand()
{

}

//
MarcoCommand::~MarcoCommand()
{

}

//
void MarcoCommand::add(Command* c)
{
	m_commands->push_back(c);
}

//
void MarcoCommand::remove(Command* c)
{
	m_commands->remove(c);
}

//
void MarcoCommand::execute(Game *game)
{
	std::list<Command*>::iterator it = m_commands->begin();
	

	//
	for (; it != m_commands->end(); ++it)
	{
		std::advance(it, 1);
		//Command* c = it;
		//it->execute(this, game);

	}
}


