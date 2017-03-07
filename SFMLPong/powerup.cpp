#include "stdafx.h"
#include "powerup.h"


sf::Vector2f Powerup::getSize()
{
	sf::IntRect sizeRect = getTextureRect(); 
	return sf::Vector2f(sizeRect.width, sizeRect.height); 
}

void Powerup::activate()
{
	if (!activated)
	{
		setColor(sf::Color(255, 255, 255, 0)); 

		timer = activeTime;
		activated = true;

		activateEffects();
	}
}

void Powerup::deactivate()
{
	deactivateEffects(); 
	finished = true; 
}

void Powerup::update(sf::Time elapsed)
{
	if (activated) {
		if (timer > 0)
		{
			timer -= elapsed.asSeconds();
		}
		else
		{
			deactivate();
		}
	}
}
