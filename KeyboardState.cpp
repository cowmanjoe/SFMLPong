//
// Created by cowan on 07/05/17.
//

#include <algorithm>
#include "KeyboardState.h"


KeyboardState::KeyboardState() {

}

bool KeyboardState::isKeyPressed(sf::Keyboard::Key k) {
    return std::find(pressedKeys.begin(), pressedKeys.end(), k) != pressedKeys.end();
}

void KeyboardState::addPressedKey(sf::Keyboard::Key k) {
    if (!this->isKeyPressed(k)) {
        pressedKeys.push_back(k);
    }
}

void KeyboardState::clearPressedKeys() {
    pressedKeys.clear();
}
