#include "addBallPowerup.h"

AddBallPowerup::AddBallPowerup()
{
    ball = new Ball();
    activeTime = 5;
    timer = 0;
    activated = false;

    sf::Texture* texture = new sf::Texture();
    texture->loadFromFile("addBall.png", sf::IntRect());
    setTexture(*texture);
}

void AddBallPowerup::setGame(Game* game) {
    this->game = game;
}


void AddBallPowerup::activateEffects()
{
    game->addBall(ball);
}


void AddBallPowerup::deactivateEffects()
{
    game->removeBall(ball);
}


PowerupType AddBallPowerup::getType() {
    return ADD_BALL;
}