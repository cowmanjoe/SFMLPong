#pragma once
#include "stdafx.h"
#include "paddle.h"
#include <iostream>

using namespace sf; 

Paddle::Paddle()
{
	speed = PADDLE_SPEED; 
	setSize(Vector2f(WIDTH, HEIGHT)); 
	setFillColor(COLOR); 
	timer = 0; 
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

void Paddle::setHeight(float height, float forSeconds) {
	move(0, -(height - getSize().y) / 2);
	setSize(Vector2f(getSize().x, height)); 
	timer = forSeconds; 
}

void Paddle::resetHeight()
{
	move(0, (getSize().y - HEIGHT) / 2); 
	setSize(Vector2f(getSize().x, HEIGHT)); 
	timer = 0; 
}

void Paddle::update(Time time)
{
	if (timer > 0)
	{
		timer -= time.asSeconds(); 
	}
	else if (timer <= 0)
	{
		resetHeight(); 
	}
}