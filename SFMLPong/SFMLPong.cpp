#pragma once
#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include "ball.h"
#include <cmath>

using namespace sf;

const int PADDLE_OFFSET = 20;
const float PADDLE_SPEED = 200;

int width;
int height;

Ball* ball;
RectangleShape* leftPaddle;
RectangleShape* rightPaddle;


void move(Transformable& transformable, float x, float y) {
	Vector2f pos = transformable.getPosition();
	transformable.setPosition(pos.x + x, pos.y + y);
}

void clampPaddle(RectangleShape* paddle)
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

void updatePaddles(Time elapsed)
{
	if (Keyboard::isKeyPressed(Keyboard::W)) {
		leftPaddle->move(0, -PADDLE_SPEED * elapsed.asSeconds());
	}
	else if (Keyboard::isKeyPressed(Keyboard::S)) {
		leftPaddle->move(0, PADDLE_SPEED * elapsed.asSeconds());
	}

	if (Keyboard::isKeyPressed(Keyboard::Up)) {
		rightPaddle->move(0, -PADDLE_SPEED * elapsed.asSeconds());
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down)) {
		rightPaddle->move(0, PADDLE_SPEED * elapsed.asSeconds());
	}

	clampPaddle(leftPaddle);
	clampPaddle(rightPaddle);
}

void updateBall(Time elapsed)
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


int main()
{
	RenderWindow window(VideoMode(640, 640), "SFML works!");

	width = window.getSize().x;
	height = window.getSize().y;


	ball = new Ball();
	ball->setPosition(width / 2 - ball->getRadius(), height / 2 - ball->getRadius());
	ball->setVelocity(70, 70);

	leftPaddle = new RectangleShape(Vector2f(15, 50));
	leftPaddle->setPosition(PADDLE_OFFSET, height / 2 - leftPaddle->getSize().y / 2);
	leftPaddle->setFillColor(Color::White);

	rightPaddle = new RectangleShape(Vector2f(15, 50));
	rightPaddle->setPosition(width - PADDLE_OFFSET - rightPaddle->getSize().x, height / 2 - rightPaddle->getSize().y / 2);
	rightPaddle->setFillColor(Color::White);

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

		updatePaddles(elapsed);
		updateBall(elapsed);

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

	return 0;
}



