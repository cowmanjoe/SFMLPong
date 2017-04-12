//
// Created by cowan on 10/04/17.
//

#include "ChangeBallSpeedPowerup.h"

using namespace sf;


ChangeBallSpeedPowerup::ChangeBallSpeedPowerup(float speed) {
    this->speed = speed;
    activeTime = 5;
    timer = 0;
    activated = false;
    sf::Texture* texture = new sf::Texture();
    texture->loadFromFile("changeBallSpeed.png");
    setTexture(*texture);
}

void ChangeBallSpeedPowerup::activateEffects() {
    for(auto it = balls.begin(); it != balls.end(); it++) {
        Ball* b = *it;
        Vector2f vel = b->getVelocity();
        b->setVelocity(vel.x * speed, vel.y * speed);

    }
}

void ChangeBallSpeedPowerup::deactivateEffects() {
    for(auto it = balls.begin(); it != balls.end(); it++) {
        Ball* b = *it;
        Vector2f vel = b->getVelocity();
        b->setVelocity(vel.x / speed, vel.y / speed);
    }
}

PowerupType ChangeBallSpeedPowerup::getType() {
    return CHANGE_BALL_SPEED;
}

void ChangeBallSpeedPowerup::setBalls(std::vector<Ball*> balls) {
    this->balls = balls;
}