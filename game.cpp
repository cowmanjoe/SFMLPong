#include "game.h"

using namespace sf;

int Game::WINDOW_WIDTH;
int Game::WINDOW_HEIGHT;

bool leftWon = false;
bool rightWon = false;

Game::Game()
{
    initialize();
    gameLoop();
}

void Game::startNewRound(bool didLeftWin) {
    powerupManager->clearPowerups();

    for (auto it = balls.begin(); it != balls.end(); it++) {
        delete *it;
    }
    balls.clear();


    Ball* ball = new Ball();
    ball->setPosition(Game::WINDOW_WIDTH / 2 - ball->getRadius(), Game::WINDOW_HEIGHT / 2 - ball->getRadius());
    ball->setVelocity(120, 120);
    ball->setLastPaddleContact(&leftPaddle);
    balls.push_back(ball);

    if (didLeftWin) {
        scoreManager->addLeftScore(1);
    }
    else{
        scoreManager->addRightScore(1);
    }

    leftWon = false;
    rightWon = false;
}

Ball* Game::dupBall(Ball *ball) {
    Vector2f vel = ball->getVelocity();
    Ball* newBall = new Ball();
    newBall->setVelocity(-vel.x, vel.y);
    newBall->setPosition(ball->getPosition());
    newBall->setLastPaddleContact(ball->getLastPaddleContact());
    balls.push_back(newBall);
    return newBall;
}

void Game::removeBall(Ball* ball) {
    balls.erase(std::remove(balls.begin(), balls.end(), ball), balls.end());
}

std::vector<Ball*> Game::getBalls() {
    return balls;
}

void Game::initialize() {
    window = new RenderWindow(VideoMode(640, 640), "Pong");
    Game::WINDOW_WIDTH = window->getSize().x;
    Game::WINDOW_HEIGHT = window->getSize().y;

    powerupManager = new PowerupManager();
    scoreManager = new ScoreManager(WINDOW_WIDTH / 2);

    leftPaddle.setPosition(PADDLE_OFFSET, Game::WINDOW_HEIGHT / 2 - leftPaddle.getSize().y / 2);

    rightPaddle.setPosition(Game::WINDOW_WIDTH - PADDLE_OFFSET - rightPaddle.getSize().x, Game::WINDOW_HEIGHT / 2 - rightPaddle.getSize().y / 2);

    Ball* ball = new Ball();
    ball->setPosition(Game::WINDOW_WIDTH / 2 - ball->getRadius(), Game::WINDOW_HEIGHT / 2 - ball->getRadius());
    ball->setVelocity(120, 120);
    ball->setLastPaddleContact(&leftPaddle);
    balls.push_back(ball);
}

void Game::gameLoop()
{
    Clock clock;

    while (window->isOpen())
    {
        Event event;
        while (window->pollEvent(event))
        {
            if (event.type == Event::Closed)
                window->close();
        }

        Time elapsed = clock.getElapsedTime();
        clock.restart();

        updatePaddles(elapsed);
        updateBalls(elapsed);
        powerupManager->update(elapsed, this);

        draw();

        if (leftWon) {
            startNewRound(true);
        }
        else if (rightWon) {
            startNewRound(false);
        }
    }

}

void Game::draw() {
    window->clear();

    for (auto it = balls.begin(); it != balls.end(); it++) {
        window->draw(**it);
    }

    powerupManager->drawPowerups(window);
    scoreManager->draw(window);

    window->draw(leftPaddle);
    window->draw(rightPaddle);
    window->display();

}

void Game::updatePaddles(Time elapsed)
{
    if (Keyboard::isKeyPressed(Keyboard::W)) {
        leftPaddle.moveUp(elapsed);
    }
    else if (Keyboard::isKeyPressed(Keyboard::S)) {
        leftPaddle.moveDown(elapsed);
    }

    if (Keyboard::isKeyPressed(Keyboard::Up)) {
        rightPaddle.moveUp(elapsed);
    }
    else if (Keyboard::isKeyPressed(Keyboard::Down)) {
        rightPaddle.moveDown(elapsed);
    }

    leftPaddle.update(elapsed);
    rightPaddle.update(elapsed);
}

float sqrtWithAny(float x) {
    if (x < 0) {
        return -sqrt(-x);
    }
    return sqrt(x);
}

void Game::updateBalls(Time elapsed)
{
    for (auto it = balls.begin(); it != balls.end(); it++) {
        Ball* ball = *it;

        ball->update(elapsed);
        Vector2f pos = ball->getPosition();
        Vector2f vel = ball->getVelocity();

        float radius = ball->getRadius();

        if (pos.y <= 0 || pos.y >= Game::WINDOW_HEIGHT - radius * 2)
        {
            ball->setVelocity(vel.x, -vel.y);
        }

        Vector2f leftPos = leftPaddle.getPosition();
        Vector2f rightPos = rightPaddle.getPosition();

        Vector2f leftSize = leftPaddle.getSize();
        Vector2f rightSize = rightPaddle.getSize();

        FloatRect ballRect = FloatRect(pos, Vector2f(radius * 2, radius * 2));

        if (leftPaddle.collidingRight(ballRect)) {
            float offsetY = leftPaddle.getOffsetY(ballRect);
            ball->setPosition(leftPos.x + leftSize.x, pos.y);
            ball->setVelocity(abs(vel.x), vel.y + abs(offsetY) * offsetY * Y_BOUNCE_FACTOR);
            ball->setLastPaddleContact(&leftPaddle);
        }
        else if (rightPaddle.collidingLeft(ballRect)) {
            float offsetY = rightPaddle.getOffsetY(ballRect);
            ball->setPosition(rightPos.x - rightSize.x, pos.y);
            ball->setVelocity(-abs(vel.x), vel.y + abs(offsetY) * offsetY * Y_BOUNCE_FACTOR);
            ball->setLastPaddleContact(&rightPaddle);
        }


        if (pos.x < 0 )
        {
            rightWon = true;
        }
        else if (pos.x > Game::WINDOW_WIDTH - radius * 2)
            leftWon = true;
    }
}

