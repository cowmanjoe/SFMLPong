//
// Created by cowan on 07/05/17.
//

#include <algorithm>
#include "InputHandler.h"

using namespace sf;

InputHandler::InputHandler() {}

bool InputHandler::isKeyPressed(Keyboard::Key k) {
    return currentKeyboardState.isKeyPressed(k);
}

bool InputHandler::isKeyJustPressed(sf::Keyboard::Key k) {
    return currentKeyboardState.isKeyPressed(k) && !previousKeyboardState.isKeyPressed(k);
}

void InputHandler::watchKey(sf::Keyboard::Key k) {
    if (std::find(watchedKeys.begin(), watchedKeys.end(), k) == watchedKeys.end()) {
        watchedKeys.push_back(k);
    }
}

void InputHandler::unwatchKey(sf::Keyboard::Key k) {
    watchedKeys.erase(std::remove(watchedKeys.begin(), watchedKeys.end(), k));
}

void InputHandler::update() {
    previousKeyboardState = currentKeyboardState;
    currentKeyboardState.clearPressedKeys();

    for (auto it = watchedKeys.begin(); it != watchedKeys.end(); it++) {
        if (Keyboard::isKeyPressed(*it)) {
            currentKeyboardState.addPressedKey(*it);
        }
    }
}