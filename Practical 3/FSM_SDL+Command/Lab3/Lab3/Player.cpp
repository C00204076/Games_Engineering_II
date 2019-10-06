#include "Player.h"
#include "Idle.h"
#include "Jumping.h"

#include <iostream>

Player::Player()
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) :
	m_animated_sprite(s)
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::~Player()
{

}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();

	//m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));


	return m_animated_sprite;
}

void Player::handleInput(Input input)
{
	switch (input.getCurrent())
	{
	case Input::Action::IDLE:
		std::cout << "Idling" << std::endl;
		m_state.idle();
		break;
	case Input::Action::UP:
		std::cout << "UP" << std::endl;
		m_state.climbing();
		break;
	case Input::Action::LEFT:
		std::cout << "Left" << std::endl;
		m_state.jumping();
		break;
	case Input::Action::RIGHT:
		std::cout << "Right" << std::endl;
		m_state.jumping();
		break;
	}
}

void Player::update()
{
	//std::cout << "Handling Input" << std::endl;
	m_animated_sprite.update();
}