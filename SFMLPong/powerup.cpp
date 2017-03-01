#include "stdafx.h"
#include "powerup.h"


void Powerup::activate()
{
	if (!activated)
	{
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