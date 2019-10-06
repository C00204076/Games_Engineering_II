#ifndef PLAYER_H
#define PLAYER_H

#include "Input.h"
#include "PlayerFSM.h"
#include "AnimatedSprite.h"


class Player
{
public:
	Player(const AnimatedSprite&);
	~Player();
	AnimatedSprite& getAnimatedSprite();
	void handleInput(Input);
	void update();

private:
	PlayerFSM m_state;
	AnimatedSprite m_animated_sprite;
	Player();
};


#endif // !PLAYER_H

