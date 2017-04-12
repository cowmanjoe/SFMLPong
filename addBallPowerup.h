#pragma once
#include "powerup.h"
#include "ball.h"
#include "game.h"

class AddBallPowerup : public Powerup
{
public:
    AddBallPowerup();
    void setGame(Game* game);
    PowerupType getType();

protected:
    void activateEffects();
    void deactivateEffects();

private:
    Ball* ball;
    Game* game;
};
