#include "stdafx.h"
#include "addBallPowerup.h"

AddBallPowerup::AddBallPowerup(Game* game)
{
  this->game = game;
  ball = new Ball();
  activeTime = 5;
  timer = 0;
  activated = false;
}

void AddBallPowerup::activateEffects()
{
  game->addBall(ball);
}


void AddBallPowerup::deactivateEffects()
{
  game->removeBall(ball); 
}
