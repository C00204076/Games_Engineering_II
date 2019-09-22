//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:16 16 September 2019
// Finished at
// Time taken:
// Known bugs:

#include "Player.h"
#include "Boss.h"
#include "CharacterFactory.h"

#include <iostream>
#include <vector>

//
int main()
{
	Factory* m_factory = new CharacterFactory();
	std::vector<Character*> m_characters;
	m_characters.push_back(m_factory->createPlayer());
	m_characters.push_back(m_factory->createBoss());

	//
	for (int i = 0; i < m_characters.size(); i++)
	{
		m_characters[i]->draw();
	}

	//return 1;
	return 0;
}