#pragma once
#include <SFML/Graphics.hpp>
#include "paddle.h"

class Ball : public sf::CircleShape
{
public:
	Ball();
	~Ball();

	void setVelocity(float x, float y);
	sf::Vector2f & getVelocity();
	void update(sf::Time elapsed);
	Paddle* getLastPaddleContact();
	void setLastPaddleContact(Paddle* paddle);

private:
	sf::Vector2f velocity;
	const int radius = 5;
	const sf::Color color = sf::Color::White;
	Paddle* lastPaddleContact;
};
