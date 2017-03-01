#pragma once
#include "stdafx.h"
#include <SFML/Graphics.hpp>

class Paddle : public sf::RectangleShape
{
public:
	Paddle(); 
	
	void moveUp(sf::Time); 
	void moveDown(sf::Time); 
	void setSpeed(float speed); 
	void update(sf::Time); 

private:
	const float WIDTH = 15;
	const float HEIGHT = 50;
	const float PADDLE_SPEED = 200;
	const sf::Color COLOR = sf::Color::White; 

	float speed; 
};
