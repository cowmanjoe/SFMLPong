//
// Created by cowan on 18/04/17.
//

#include <iostream>
#include "ScoreManager.h"

using namespace sf;

void ScoreManager::addLeftScore(int score) {
    leftScore += score;
    updateText();
}

void ScoreManager::addRightScore(int score) {
    rightScore += score;
    updateText();
}

ScoreManager::ScoreManager(int centerX) {
    leftScore = 0;
    rightScore = 0;
    leftText.setPosition(centerX - 20, 10);
    rightText.setPosition(centerX + 20, 10);

    if (!font.loadFromFile("Oswald-Regular.ttf")) {
        std::cout << "Font failed to load!\n";
    }
    leftText.setFont(font);
    rightText.setFont(font);
    leftText.setCharacterSize(30);
    rightText.setCharacterSize(30);
    updateText();
}


void ScoreManager::updateText() {
    char leftBuffer[8];
    char rightBuffer[8];

    snprintf(leftBuffer, 8, "%d", leftScore);
    snprintf(rightBuffer, 8, "%d", rightScore);

    String leftString(leftBuffer);
    String rightString(rightBuffer);

    leftText.setString(leftString);
    rightText.setString(rightString);
}

void ScoreManager::draw(sf::RenderWindow *window) {
    window->draw(leftText);
    window->draw(rightText);
}
