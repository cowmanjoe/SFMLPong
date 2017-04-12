#pragma once
#include <SFML/Graphics.hpp>
#include "powerup.h"
#include "paddle.h"

class LongPaddlePowerup : public Powerup
{
public:
	LongPaddlePowerup();
    void setPaddle(Paddle* paddle);
	PowerupType getType();

protected: 
	void activateEffects();
	void deactivateEffects(); 
private:
	Paddle* paddle; 
	const float DEFAULT_HEIGHT = 50; 
	const float EXTENDED_HEIGHT = 100; 
};
