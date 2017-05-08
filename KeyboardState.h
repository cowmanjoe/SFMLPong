//
// Created by cowan on 07/05/17.
//

#ifndef SFMLPONG_KEYBOARDSTATE_H
#define SFMLPONG_KEYBOARDSTATE_H


#include <SFML/Window/Keyboard.hpp>
#include <vector>

class KeyboardState {
public:
    KeyboardState();

    void addPressedKey(sf::Keyboard::Key);
    void clearPressedKeys();
    bool isKeyPressed(sf::Keyboard::Key);

private:
    std::vector<sf::Keyboard::Key> pressedKeys;


};


#endif //SFMLPONG_KEYBOARDSTATE_H
