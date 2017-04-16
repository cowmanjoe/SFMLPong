#pragma once
#include <SFML/Graphics.hpp>

class Paddle : public sf::RectangleShape
{
public:
	Paddle(); 
	
	void moveUp(sf::Time); 
	void moveDown(sf::Time); 
	void setSpeed(float speed); 
	void update(sf::Time);

	
	bool collidingLeft(sf::FloatRect);
	bool collidingRight(sf::FloatRect); 
	
	float getOffsetY(sf::FloatRect);

private:
	void clampPaddle();

	const float WIDTH = 15.0f;
	const float HEIGHT = 50.0f;
	const float PADDLE_SPEED = 350.0f;

	const float COLLISION_THRESHHOLD = 3.0f;

	const sf::Color COLOR = sf::Color::White; 

	float speed; 
};
