#pragma once
#include <SFML/Graphics.hpp>
#include "paddle.h"
#include "ball.h"
#include "powerup.h"

class Game
{
public: 
	Game(); 

	void addPowerup(Powerup* powerup); 

private:
	const int PADDLE_OFFSET = 20;
	const float PADDLE_SPEED = 200;

	int width;
	int height;

	Ball* ball;
	Paddle* leftPaddle;
	Paddle* rightPaddle;

	std::vector<Powerup*> powerups; 

	void gameLoop(); 

	void clampPaddle(Paddle* paddle);
	void updatePaddles(sf::Time elapsed); 
	void updateBall(sf::Time elapsed); 
	void updatePowerups(sf::Time elapsed); 
	
};