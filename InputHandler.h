//
// Created by cowan on 07/05/17.
//

#ifndef SFMLPONG_INPUTHANDLER_H
#define SFMLPONG_INPUTHANDLER_H


#include "KeyboardState.h"

class InputHandler {
public:
    InputHandler();
    bool isKeyPressed(sf::Keyboard::Key);
    bool isKeyJustPressed(sf::Keyboard::Key);
    void watchKey(sf::Keyboard::Key);
    void unwatchKey(sf::Keyboard::Key);
    void update();


private:
    KeyboardState currentKeyboardState;
    KeyboardState previousKeyboardState;

    std::vector<sf::Keyboard::Key> watchedKeys;
};


#endif //SFMLPONG_INPUTHANDLER_H
