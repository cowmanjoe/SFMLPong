#pragma once
#include <SFML/Graphics.hpp>
#include "paddle.h"

class Ball : public sf::CircleShape
{
public:
	Ball();
	~Ball();

	void setVelocity(float velocity);
	float getVelocity();
	void setMovementAngle(float angle);
	float getMovementAngle();
	void update(sf::Time elapsed);
	Paddle* getLastPaddleContact();
	void setLastPaddleContact(Paddle* paddle);

private:
    float velocity;
	float movementAngle;
	const int radius = 5;
	const sf::Color color = sf::Color::White;
	Paddle* lastPaddleContact;
};
