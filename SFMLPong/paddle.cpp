#pragma once
#include "stdafx.h"
#include "paddle.h"
#include "game.h"
#include <iostream>

using namespace sf; 

Paddle::Paddle()
{
	speed = PADDLE_SPEED; 
	setSize(Vector2f(WIDTH, HEIGHT)); 
	setFillColor(COLOR); 
}

void Paddle::moveUp(Time time)
{
	float seconds = time.asSeconds(); 
	move(0, -PADDLE_SPEED * seconds); 
	
}

void Paddle::moveDown(Time time)
{
	float seconds = time.asSeconds(); 
	move(0, PADDLE_SPEED * seconds); 
}

void Paddle::setSpeed(float speed)
{
	this->speed = speed; 
}


void Paddle::update(Time time)
{
	clampPaddle(); 
}

bool Paddle::collidingLeft(FloatRect rect)
{
	Vector2f pos = getPosition(); 
	Vector2f size = getSize(); 
	FloatRect paddleCollisionRect = FloatRect(pos.x, pos.y, COLLISION_THRESHHOLD, size.y); 

	FloatRect otherCollisionRect = FloatRect(rect.left + rect.width - COLLISION_THRESHHOLD, rect.top, COLLISION_THRESHHOLD, rect.height); 

	return otherCollisionRect.intersects(paddleCollisionRect); 
}

bool Paddle::collidingRight(FloatRect rect)
{
	Vector2f pos = getPosition();
	Vector2f size = getSize();
	FloatRect paddleCollisionRect = FloatRect(pos.x + size.x - COLLISION_THRESHHOLD, pos.y, COLLISION_THRESHHOLD, size.y);

	FloatRect otherCollisionRect = FloatRect(rect.left, rect.top, COLLISION_THRESHHOLD, rect.height); 

	return otherCollisionRect.intersects(paddleCollisionRect);
}

float Paddle::getOffsetY(FloatRect rect) {
	float centerY = getPosition().y + getSize().y / 2; 
	float otherCenterY = rect.top + rect.height / 2; 

	return otherCenterY - centerY; 
}

void Paddle::clampPaddle()
{
	Vector2f pos = getPosition();
	Vector2f size = getSize();
	float y = pos.y;
	if (pos.y < 0)
	{
		y = 0;
	}
	else if (pos.y > Game::WINDOW_HEIGHT - size.y)
	{
		y = Game::WINDOW_HEIGHT - size.y;
	}

	setPosition(pos.x, y);
}
