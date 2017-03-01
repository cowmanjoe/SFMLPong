#include "longPaddlePowerup.h"

using namespace sf; 

LongPaddlePowerup::LongPaddlePowerup(Paddle* paddle) {
	this->paddle = paddle; 
	activeTime = 5; 
	timer = 0; 
	activated = false; 
}

void LongPaddlePowerup::activateEffects()
{
	Vector2f size = paddle->getSize(); 
	paddle->move(0, -(EXTENDED_HEIGHT - size.y) / 2); 
	paddle->setSize(Vector2f(size.x, EXTENDED_HEIGHT));
}

void LongPaddlePowerup::deactivateEffects()
{
	sf::Vector2f size = paddle->getSize(); 
	paddle->move(0, (size.y - DEFAULT_HEIGHT) / 2);
	paddle->setSize(Vector2f(size.x, DEFAULT_HEIGHT)); 
}

