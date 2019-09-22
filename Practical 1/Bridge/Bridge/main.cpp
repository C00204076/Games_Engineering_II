//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:52 16 September 2019 
// Finished at 
// Time taken:
// Known bugs:

#include "DrawAPI.h"
#include "DrawImpl.h"
#include "Character.h"
#include "Player.h"

//
int main()
{
	DrawAPI* m_api = new DrawImpl();
	Character* m_character = new Player(m_api);

	//
	m_character->draw();
	std::cin.get();

	//return 1;
	return 0;
}