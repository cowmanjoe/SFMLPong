//
// Created by cowan on 16/04/17.
//

#ifndef SFMLPONG_POWERUPMANAGER_H
#define SFMLPONG_POWERUPMANAGER_H


//#include "game.h"

#include <SFML/System/Time.hpp>
#include "powerup.h"
#include "ball.h"

class Game;

class PowerupManager {
public:
    PowerupManager();

    void update(sf::Time elapsed, Game *game);
    std::vector<Powerup*> getPowerups();
    void drawPowerups(sf::RenderWindow* window);
    void activatePowerup(Powerup *p, Game *g, Ball *b);
    void clearPowerups();
private:
    std::vector<Powerup*> powerups;
    void maybeGeneratePowerup(int odds, Game* game);
};


#endif //SFMLPONG_POWERUPMANAGER_H
