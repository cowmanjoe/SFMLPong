#include "addBallPowerup.h"

AddBallPowerup::AddBallPowerup()
{
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

void AddBallPowerup::setBall(Ball* ball) {
    this->ball = ball;
}

void AddBallPowerup::activateEffects()
{
    game->dupBall(ball);
}


void AddBallPowerup::deactivateEffects()
{
    game->removeBall(ball);
}


PowerupType AddBallPowerup::getType() {
    return ADD_BALL;
}