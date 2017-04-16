#pragma once
#include <SFML/Graphics.hpp>
#include "paddle.h"
#include "ball.h"
#include "powerup.h"
#include "PowerupManager.h"

class PowerupManager;

class Game
{
public:
	Game();

    void addBall(Ball* ball);
	void removeBall(Ball* ball);

	std::vector<Ball*> getBalls();

	static int WINDOW_WIDTH;
	static int WINDOW_HEIGHT;
private:
    void initialize();
	void gameLoop();

	void updatePaddles(sf::Time elapsed);
	void updateBalls(sf::Time elapsed);
	void draw();
	const int PADDLE_OFFSET = 20;
	const float PADDLE_SPEED = 300;
	const float Y_BOUNCE_FACTOR = 0.1f; 
	sf::RenderWindow* window;
	

	std::vector<Ball*> balls;
	Paddle* leftPaddle;
	Paddle* rightPaddle;

    PowerupManager* powerupManager;
	

};
