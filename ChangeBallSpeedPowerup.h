//
// Created by cowan on 10/04/17.
//

#ifndef SFMLPONG_CHANGEBALLSPEEDPOWERUP_H
#define SFMLPONG_CHANGEBALLSPEEDPOWERUP_H


#include "ball.h"
#include "powerup.h"

class ChangeBallSpeedPowerup : public Powerup{
public:
    ChangeBallSpeedPowerup(float speed);
    PowerupType getType();
    void setBalls(std::vector<Ball*> balls);

protected:
    void activateEffects();
    void deactivateEffects();

private:
    std::vector<Ball*> balls;
    float speed;
};


#endif //SFMLPONG_CHANGEBALLSPEEDPOWERUP_H
