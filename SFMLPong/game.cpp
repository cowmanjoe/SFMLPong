#include "stdafx.h"
#include "game.h"
#include "longPaddlePowerup.h"

using namespace sf; 



Game::Game()
{
	gameLoop(); 
}

void Game::addPowerup(Powerup* powerup)
{
	powerups.push_back(powerup); 
}

void Game::gameLoop()
{
	RenderWindow window(VideoMode(640, 640), "SFML works!");

	width = window.getSize().x;
	height = window.getSize().y;


	ball = new Ball();
	ball->setPosition(width / 2 - ball->getRadius(), height / 2 - ball->getRadius());
	ball->setVelocity(70, 70);

	leftPaddle = new Paddle();
	leftPaddle->setPosition(PADDLE_OFFSET, height / 2 - leftPaddle->getSize().y / 2);

	rightPaddle = new Paddle();
	rightPaddle->setPosition(width - PADDLE_OFFSET - rightPaddle->getSize().x, height / 2 - rightPaddle->getSize().y / 2);

	Clock clock;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		Time elapsed = clock.getElapsedTime();
		clock.restart();

		if (Keyboard::isKeyPressed(Keyboard::Space))
		{
			LongPaddlePowerup* powerup = new LongPaddlePowerup(leftPaddle); 
			addPowerup(powerup); 
			powerup->activate(); 
		}
		if (Keyboard::isKeyPressed(Keyboard::BackSpace))
		{
			LongPaddlePowerup* powerup = new LongPaddlePowerup(rightPaddle);
			addPowerup(powerup);
			powerup->activate();
		}

		updatePaddles(elapsed);
		updateBall(elapsed);
		updatePowerups(elapsed);

		if (ball->getPosition().x < 0 || ball->getPosition().x > width - ball->getRadius() * 2)
		{
			window.close();
		}

		window.clear();
		window.draw(*ball);
		window.draw(*leftPaddle);
		window.draw(*rightPaddle);
		window.display();
	}
}

void Game::clampPaddle(Paddle* paddle)
{
	Vector2f pos = paddle->getPosition();
	Vector2f size = paddle->getSize();
	float y = pos.y;
	if (pos.y < 0)
	{
		y = 0;
	}
	else if (pos.y > height - size.y)
	{
		y = height - size.y;
	}

	paddle->setPosition(pos.x, y);
}

void Game::updatePaddles(Time elapsed)
{
	leftPaddle->update(elapsed);
	rightPaddle->update(elapsed);

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

	clampPaddle(leftPaddle);
	clampPaddle(rightPaddle);
}

void Game::updateBall(Time elapsed)
{
	ball->update(elapsed);
	Vector2f pos = ball->getPosition();
	Vector2f vel = ball->getVelocity();

	float radius = ball->getRadius();

	if (pos.y <= 0 || pos.y >= height - radius * 2)
	{
		ball->setVelocity(vel.x, -vel.y);
	}

	Vector2f leftPos = leftPaddle->getPosition();
	Vector2f rightPos = rightPaddle->getPosition();

	Vector2f leftSize = leftPaddle->getSize();
	Vector2f rightSize = rightPaddle->getSize();

	if (pos.x <= leftPos.x + leftSize.x &&
		pos.x >= leftPos.x &&
		pos.y + radius * 2 >= leftPos.y &&
		pos.y <= leftPos.y + leftSize.y) {
		ball->setVelocity(abs(vel.x), vel.y);
	}
	else if (pos.x + radius * 2 <= rightPos.x + leftSize.x &&
		pos.x + radius * 2 >= rightPos.x &&
		pos.y + radius * 2 >= rightPos.y &&
		pos.y <= rightPos.y + rightSize.y) {
		ball->setVelocity(-abs(vel.x), vel.y);
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
		p->update(elapsed);
		
	}
}
