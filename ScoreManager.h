//
// Created by cowan on 18/04/17.
//

#ifndef SFMLPONG_SCOREMANAGER_H
#define SFMLPONG_SCOREMANAGER_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>

class ScoreManager {
public:
    ScoreManager(int centerX);

    void addLeftScore(int score);
    void addRightScore(int score);

    void draw(sf::RenderWindow* window);
private:
    int leftScore;
    int rightScore;

    sf::Font font;

    sf::Text leftText;
    sf::Text rightText;

    void updateText();
};


#endif //SFMLPONG_SCOREMANAGER_H
