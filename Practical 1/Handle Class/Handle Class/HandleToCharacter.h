//
// C002040746
// Brandon Seah-Dempsey
// Started at 14:24 16 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef HANDLETOCHARACTER_H
#define HANDLETOCHARACTER_H

#include "Character.h"

//
class HandleToCharacter
{
public:
	HandleToCharacter() : m_character(new Character())
	{

	}

	// Overloaded ->
	Character* operator->()
	{
		return m_character;
	}

private:
	Character* m_character;
};

#endif // !HANDLETOCHARACTER_H
