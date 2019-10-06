#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H

#include <SFML\Graphics\Sprite.hpp>
#include <SFML\System\Clock.hpp>
#include "SDL.h"
#include "SDL_image.h"

#include <vector>

using namespace sf;

class AnimatedSprite : public Sprite
{
public:
	AnimatedSprite();
	AnimatedSprite(const SDL_Texture*);
	AnimatedSprite(const SDL_Texture*, const SDL_Rect&);
	~AnimatedSprite();

	
	const Clock& getClock();
	const Time& getTime();
	const std::vector<SDL_Rect>& getFrames();
	const SDL_Rect& getFrame(int);
	void addFrame(SDL_Rect&);
	const int getCurrentFrame();
	void update();
	

private:
	Clock m_clock;
	Time m_time;
	std::vector<SDL_Rect> m_frames;
	int m_current_frame;

};

#endif // !ANIMATEDSPRITE_H