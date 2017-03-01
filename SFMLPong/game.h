#pragma once
#include <SFML/Graphics.hpp>
#include "stdafx.h"
#include "paddle.h"
#include "ball.h"
#include "powerup.h"

class Game
{
public:
	Game();

	void addPowerup(Powerup* powerup);
  void addBall(Ball* ball);
	void removeBall(Ball* ball);
private:
	const int PADDLE_OFFSET = 20;
	const float PADDLE_SPEED = 200;

	sf::RenderWindow* window;
	int width;
	int height;

	std::vector<Ball*> balls;
	Paddle* leftPaddle;
	Paddle* rightPaddle;

	std::vector<Powerup*> powerups;

	void gameLoop();

	void clampPaddle(Paddle* paddle);
	void updatePaddles(sf::Time elapsed);
	void updateBalls(sf::Time elapsed);
	void updatePowerups(sf::Time elapsed);
	void draw();

};
