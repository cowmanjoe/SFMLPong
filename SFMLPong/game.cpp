#include "stdafx.h"
#include "game.h"
#include "longPaddlePowerup.h"
#include "addBallPowerup.h"
#include <iostream>

using namespace sf;

bool newBallSpawned = false;

int Game::WINDOW_WIDTH; 
int Game::WINDOW_HEIGHT;

Game::Game()
{
	
	gameLoop();
}

void Game::addPowerup(Powerup* powerup)
{
	powerups.push_back(powerup);
}

void Game::addBall(Ball* ball) {
  Ball* firstBall = balls.front();
	Vector2f firstVel = firstBall->getVelocity();
	ball->setVelocity(-firstVel.x, firstVel.y);
  ball->setPosition(firstBall->getPosition());
	balls.push_back(ball);
}

void Game::removeBall(Ball* ball) {
	balls.erase(std::remove(balls.begin(), balls.end(), ball), balls.end());
}

void Game::gameLoop()
{
	window = new RenderWindow(VideoMode(640, 640), "SFML works!");

	Game::WINDOW_WIDTH = window->getSize().x;
	Game::WINDOW_HEIGHT = window->getSize().y;


	Ball* ball = new Ball();
	ball->setPosition(Game::WINDOW_WIDTH / 2 - ball->getRadius(), Game::WINDOW_HEIGHT / 2 - ball->getRadius());
	ball->setVelocity(120, 120);

	balls.push_back(ball);

	leftPaddle = new Paddle();
	leftPaddle->setPosition(PADDLE_OFFSET, Game::WINDOW_HEIGHT / 2 - leftPaddle->getSize().y / 2);

	rightPaddle = new Paddle();
	rightPaddle->setPosition(Game::WINDOW_WIDTH - PADDLE_OFFSET - rightPaddle->getSize().x, Game::WINDOW_HEIGHT / 2 - rightPaddle->getSize().y / 2);

	Clock clock;

	while (window->isOpen())
	{
		Event event;
		while (window->pollEvent(event))
		{
			if (event.type == Event::Closed)
				window->close();
		}

		Time elapsed = clock.getElapsedTime();
		clock.restart();

		if (Keyboard::isKeyPressed(Keyboard::Space))
		{
			AddBallPowerup* powerup = new AddBallPowerup(this);
			powerup->setPosition(300, 300); 
			addPowerup(powerup);
		}
		if (Keyboard::isKeyPressed(Keyboard::BackSpace))
		{
			AddBallPowerup* powerup = new AddBallPowerup(this);
			powerup->setPosition(400, 500); 
			addPowerup(powerup);
		}

    if (!newBallSpawned && Keyboard::isKeyPressed(Keyboard::N))
    {
      AddBallPowerup* powerup = new AddBallPowerup(this);
      addPowerup(powerup);
      powerup->activate();
      newBallSpawned = true;
    }

    updatePaddles(elapsed);
		updateBalls(elapsed);
		updatePowerups(elapsed);

		draw(); 
  }

}

void Game::draw() {
	window->clear();

	for (auto it = balls.begin(); it != balls.end(); it++) {
		window->draw(**it);
	}

	for (auto it = powerups.begin(); it != powerups.end(); it++)
	{
		window->draw(**it); 
	}

	window->draw(*leftPaddle);
	window->draw(*rightPaddle);
	window->display();

}

void Game::updatePaddles(Time elapsed)
{
	if (Keyboard::isKeyPressed(Keyboard::W)) {
		leftPaddle->moveUp(elapsed);
	}
	else if (Keyboard::isKeyPressed(Keyboard::S)) {
		leftPaddle->moveDown(elapsed);
	}

	if (Keyboard::isKeyPressed(Keyboard::Up)) {
		rightPaddle->moveUp(elapsed);
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down)) {
		rightPaddle->moveDown(elapsed);
	}

	leftPaddle->update(elapsed);
	rightPaddle->update(elapsed);
}

float sqrtWithAny(float x) {
	if (x < 0) {
		return -sqrt(-x); 
	}
	return sqrt(x); 
}

void Game::updateBalls(Time elapsed)
{
	for (auto it = balls.begin(); it != balls.end(); it++) {
		Ball* ball = *it;

		ball->update(elapsed);
		Vector2f pos = ball->getPosition();
		Vector2f vel = ball->getVelocity();

		float radius = ball->getRadius();

		if (pos.y <= 0 || pos.y >= Game::WINDOW_HEIGHT - radius * 2)
		{
			ball->setVelocity(vel.x, -vel.y);
		}

		Vector2f leftPos = leftPaddle->getPosition();
		Vector2f rightPos = rightPaddle->getPosition();

		Vector2f leftSize = leftPaddle->getSize();
		Vector2f rightSize = rightPaddle->getSize();

		FloatRect ballRect = FloatRect(pos, Vector2f(radius * 2, radius * 2));

		if (leftPaddle->collidingRight(ballRect)) {
			float offsetY = leftPaddle->getOffsetY(ballRect);
			ball->setPosition(leftPos.x + leftSize.x, pos.y); 
			ball->setVelocity(abs(vel.x), vel.y + abs(offsetY) * offsetY * Y_BOUNCE_FACTOR);
		}
		else if (rightPaddle->collidingLeft(ballRect)) {
			float offsetY = rightPaddle->getOffsetY(ballRect);
			ball->setPosition(rightPos.x - rightSize.x, pos.y); 
			ball->setVelocity(-abs(vel.x), vel.y + abs(offsetY) * offsetY * Y_BOUNCE_FACTOR);
		}
		

		if (pos.x < 0 || pos.x > Game::WINDOW_WIDTH - radius * 2)
		{
			window->close();
		}
    }
}

bool isFinished(Powerup* powerup)
{
	return powerup->finished;
}

void Game::updatePowerups(Time elapsed)
{
	powerups.erase(std::remove_if(powerups.begin(), powerups.end(), isFinished), powerups.end());

	for (auto it = powerups.begin(); it != powerups.end(); it++)
	{
		Powerup* p = *it;

		Vector2f pos = p->getPosition();
		Vector2f size = p->getSize();


		for (auto bit = balls.begin(); bit != balls.end(); bit++)
		{
			Ball* b = *bit;
			float bRad = b->getRadius();
			Vector2f bCenterPos = b->getPosition() + Vector2f(bRad, bRad); 

			float distX = abs(bCenterPos.x - pos.x - size.x / 2);
			float distY = abs(bCenterPos.y - pos.y - size.y / 2); 

			if (distX > (size.x / 2 + bRad)) 
				continue; 
			if (distY > (size.y / 2 + bRad)) 
				continue; 

			if (distX <= size.x / 2)
			{
				p->activate(); 
				break;
			}
			if (distY <= size.y / 2) {
				p->activate();
				break; 
			}
			float dx = distX - size.x / 2; 
			float dy = distY - size.y / 2; 
			if (dx*dx + dy*dy <= (bRad*bRad))
			{
				p->activate(); 
				break; 
			}
		}

		p->update(elapsed);

	}
}
