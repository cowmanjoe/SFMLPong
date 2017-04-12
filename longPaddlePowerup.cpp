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
	paddle->move(0, -(EXTENDED_HEIGHT - size.y) / 2); 
	paddle->setSize(Vector2f(size.x, EXTENDED_HEIGHT));
}

void LongPaddlePowerup::deactivateEffects()
{
	sf::Vector2f size = paddle->getSize(); 
	paddle->move(0, (size.y - DEFAULT_HEIGHT) / 2);
	paddle->setSize(Vector2f(size.x, DEFAULT_HEIGHT)); 
}

PowerupType LongPaddlePowerup::getType() {
    return LONG_PADDLE;
}
