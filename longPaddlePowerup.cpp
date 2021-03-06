#include <iostream>
#include "longPaddlePowerup.h"

using namespace sf;

LongPaddlePowerup::LongPaddlePowerup() {
	activeTime = 5;
	timer = 0; 
	activated = false; 
    Texture* texture = new Texture();
    texture->loadFromFile("longPaddle.png");
    setTexture(*texture);
}

void LongPaddlePowerup::setPaddle(Paddle* paddle) {
    this->paddle = paddle;
}

void LongPaddlePowerup::activateEffects()
{
	Vector2f size = paddle->getSize();
	paddle->move(0, -EXTENSION / 2);
	paddle->setSize(Vector2f(size.x, size.y + EXTENSION));
}

void LongPaddlePowerup::deactivateEffects()
{
	sf::Vector2f size = paddle->getSize();
	paddle->move(0, EXTENSION / 2);
	paddle->setSize(Vector2f(size.x, size.y - EXTENSION));
}

PowerupType LongPaddlePowerup::getType() {
    return LONG_PADDLE;
}
