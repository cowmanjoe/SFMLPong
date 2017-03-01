#pragma once
#include "ball.h"

using namespace sf;


Ball::Ball()
{
	setRadius(radius);
	setFillColor(color);
	setVelocity(0, 0);
}

Ball::~Ball() {};

void Ball::setVelocity(float x, float y)
{
	velocity.x = x;
	velocity.y = y;
}

Vector2f & Ball::getVelocity()
{
	return velocity;
}

void Ball::update(Time elapsed)
{
	Vector2f pos = getPosition();
	setPosition(pos.x + velocity.x * elapsed.asSeconds(), pos.y + velocity.y * elapsed.asSeconds());
}
