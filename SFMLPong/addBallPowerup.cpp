#include "stdafx.h"
#include "addBallPowerup.h"

AddBallPowerup::AddBallPowerup(Game* game)
{
  this->game = game;
  ball = new Ball();
  activeTime = 5;
  timer = 0;
  activated = false;

  sf::Texture* texture = new sf::Texture();
  texture->loadFromFile("ball.png");
  setTexture(*texture); 
}

void AddBallPowerup::activateEffects()
{
  game->addBall(ball);
}


void AddBallPowerup::deactivateEffects()
{
  game->removeBall(ball); 
}
