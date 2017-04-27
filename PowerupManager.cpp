//
// Created by cowan on 16/04/17.
//

#include <iostream>
#include "PowerupManager.h"
#include "addBallPowerup.h"
#include "longPaddlePowerup.h"
#include "ChangeBallSpeedPowerup.h"

using namespace sf;


PowerupManager::PowerupManager() {
    srand(time(0));
}

void PowerupManager::maybeGeneratePowerup(int odds, Game* game) {
    int r = rand() % 10000;
    Powerup* powerup;
    bool spawned = false;
    if (r == 0) {
        AddBallPowerup* addBallPowerup = new AddBallPowerup();
        addBallPowerup->setGame(game);
        powerup = addBallPowerup;
        powerups.push_back(powerup);
        spawned = true;
    }
    else if (r == 1) {
        LongPaddlePowerup* longPaddlePowerup = new LongPaddlePowerup();
        powerup = longPaddlePowerup;
        powerups.push_back(powerup);
        spawned = true;
    }
    else if (r == 2) {
        ChangeBallSpeedPowerup* ballSpeedPowerup = new ChangeBallSpeedPowerup(1.5);
        ballSpeedPowerup->setBalls(game->getBalls());
        powerup = ballSpeedPowerup;
        powerups.push_back(powerup);
        spawned = true;
    }

    if (spawned) {
        Vector2f size = powerup->getSize();
        int x = rand() % (game->WINDOW_WIDTH - (int) size.x / 2) + size.x / 2;
        int y = rand() % (game->WINDOW_HEIGHT - (int) size.y / 2) + size.y / 2;
        powerup->setPosition(x, y);
    }


}

void PowerupManager::drawPowerups(RenderWindow* window) {
    for (auto it = powerups.begin(); it != powerups.end(); it++) {
        window->draw(**it);
    }
}


bool isFinished(Powerup* powerup)
{
    return powerup->finished;
}


void PowerupManager::update(Time elapsed, Game* game) {
    powerups.erase(std::remove_if(powerups.begin(), powerups.end(), isFinished), powerups.end());

    maybeGeneratePowerup(10000, game);

    for (auto it = powerups.begin(); it != powerups.end(); it++)
    {
        Powerup* p = *it;

        Vector2f pos = p->getPosition();
        Vector2f size = p->getSize();

        std::vector<Ball*> currentBalls(game->getBalls());

        for (auto bit = currentBalls.begin(); bit != currentBalls.end(); bit++)
        {
            Ball* b = *bit;
            float bRad = b->getRadius();
            Vector2f bCenterPos = b->getPosition() + Vector2f(bRad, bRad);

            float distX = abs(bCenterPos.x - pos.x - size.x / 2);
            float distY = abs(bCenterPos.y - pos.y - size.y / 2);

            if (distX > (size.x / 2 + bRad))
                continue;
            if (distY > (size.y / 2 + bRad))
                continue;

            float dx = distX - size.x / 2;
            float dy = distY - size.y / 2;
            if (!p->isActivated() && (distX <= size.x / 2 || distY <= size.y / 2 || dx*dx + dy*dy <= (bRad*bRad)))
            {
                activatePowerup(p, game, b);
            }
        }
        std::cout << p << "\n";
        p->update(elapsed);
    }
}

std::vector<Powerup*> PowerupManager::getPowerups() {
    return powerups;
}


void PowerupManager::activatePowerup(Powerup *p, Game *g, Ball *b) {
    switch (p->getType()) {
        case ADD_BALL: {
            AddBallPowerup *abp = (AddBallPowerup *) p;
            abp->setGame(g);
            abp->setBall(b);
            break;
        }
        case CHANGE_BALL_SPEED: {
            ChangeBallSpeedPowerup *cbsp = (ChangeBallSpeedPowerup *) p;
            cbsp->setBalls(g->getBalls());
            break;
        }
        case LONG_PADDLE: {
            LongPaddlePowerup *lpp = (LongPaddlePowerup *) p;
            lpp->setPaddle(b->getLastPaddleContact());
            break;
        }
    }
    p->activate();
}

void PowerupManager::clearPowerups() {
    for (auto it = powerups.begin(); it != powerups.end(); it++) {
        if ((*it)->isActivated())
            (*it)->deactivate();
        delete *it;
    }
    powerups.clear();

}