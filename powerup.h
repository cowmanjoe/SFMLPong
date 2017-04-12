#pragma once
#include <SFML/Graphics.hpp>

enum PowerupType {
    ADD_BALL = 0,
    CHANGE_BALL_SPEED,
    LONG_PADDLE
};

class Powerup : public sf::Sprite
{
public:
	sf::Vector2f getSize(); 

	// called before activating the concrete powerup 
	void activate(); 

	// called after deactivating the effect (to delete)
	virtual void deactivate(); 

	virtual void update(sf::Time elapsed);

	virtual PowerupType getType() = 0;

	bool finished = false;

protected:

	// called by activate 
	virtual void activateEffects() = 0; 

	// called by deactivate
	virtual void deactivateEffects() = 0; 

	float activeTime; 
	float timer = 0; 
	bool activated = false;
	
};

