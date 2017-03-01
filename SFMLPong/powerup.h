#pragma once
#include "stdafx.h"
#include <SFML/Graphics.hpp>

class Powerup : public sf::Sprite
{
public:
	// call this before activating the concrete powerup 
	void activate(); 

	// call this after deactivating the effect (to delete)
	virtual void deactivate(); 

	virtual void update(sf::Time elapsed); 

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
