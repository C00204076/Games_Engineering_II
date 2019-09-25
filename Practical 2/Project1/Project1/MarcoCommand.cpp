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
void MarcoCommand::execute()
{
	std::list<Command*>::iterator i;

	//
	for (i = m_commands->begin(); i != m_commands->end(); ++i)
	{
		//Command* c;
		//c->execute();
	}
}


