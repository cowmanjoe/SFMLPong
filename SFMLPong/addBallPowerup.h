#pragma once
#include "powerup.h"
#include "ball.h"
#include "game.h"

class AddBallPowerup : public Powerup
{
public:
  AddBallPowerup(Game* game);

protected:
  void activateEffects();
  void deactivateEffects();

private:
  Ball* ball;
  Game* game;
};
