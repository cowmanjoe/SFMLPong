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
	
}