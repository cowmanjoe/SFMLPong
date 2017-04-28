#pragma once
#include "ball.h"

using namespace sf;


Ball::Ball()
{
	setRadius(radius);
	setFillColor(color);
	setVelocity(0);
    setMovementAngle(0);
}

Ball::~Ball() {};

void Ball::setVelocity(float velocity)
{
	this->velocity = velocity;
}

float Ball::getVelocity()
{
	return velocity;
}

void Ball::setMovementAngle(float angle) {
	this->movementAngle = angle;
}

float Ball::getMovementAngle() {
	return movementAngle;
}

void Ball::update(Time elapsed)
{
	Vector2f pos = getPosition();
	float xvel = velocity * cosf(movementAngle);
	float yvel = velocity * sinf(movementAngle);
	setPosition(pos.x + xvel * elapsed.asSeconds(), pos.y + yvel * elapsed.asSeconds());
}

Paddle* Ball::getLastPaddleContact() {
	return lastPaddleContact;
}

void Ball::setLastPaddleContact(Paddle *paddle) {
	lastPaddleContact = paddle;
}