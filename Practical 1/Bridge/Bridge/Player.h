//
// C00204076
// Brandon Seah-Dempsey
// Started at 17:07 16 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

//
class Player : public Character
{
public:
	//
	Player(DrawAPI* api)
	{
		this->m_api = api;
	}

	//
	void draw()
	{
		m_api->draw();
	}

private:
	DrawAPI* m_api;
};

#endif // !PLAYER_H

