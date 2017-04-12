#include "game.h"
#include "longPaddlePowerup.h"
#include "addBallPowerup.h"
#include "ChangeBallSpeedPowerup.h"
#include <iostream>

using namespace sf;

bool newBallSpawned = false;
bool ballSpeedChanged = false;

int Game::WINDOW_WIDTH;
int Game::WINDOW_HEIGHT;

Game::Game()
{

    gameLoop();
}

void Game::addPowerup(Powerup* powerup)
{
    powerups.push_back(powerup);
}

void Game::addBall(Ball* ball) {
    Ball* firstBall = balls.front();
    Vector2f firstVel = firstBall->getVelocity();
    ball->setVelocity(-firstVel.x, firstVel.y);
    ball->setPosition(firstBall->getPosition());
    balls.push_back(ball);
}

void Game::removeBall(Ball* ball) {
    balls.erase(std::remove(balls.begin(), balls.end(), ball), balls.end());
}

std::vector<Ball*> Game::getBalls() {
    return balls;
}

void Game::gameLoop()
{
    window = new RenderWindow(VideoMode(640, 640), "SFML works!");

    Game::WINDOW_WIDTH = window->getSize().x;
    Game::WINDOW_HEIGHT = window->getSize().y;


    Ball* ball = new Ball();
    ball->setPosition(Game::WINDOW_WIDTH / 2 - ball->getRadius(), Game::WINDOW_HEIGHT / 2 - ball->getRadius());
    ball->setVelocity(120, 120);

    balls.push_back(ball);

    leftPaddle = new Paddle();
    leftPaddle->setPosition(PADDLE_OFFSET, Game::WINDOW_HEIGHT / 2 - leftPaddle->getSize().y / 2);

    rightPaddle = new Paddle();
    rightPaddle->setPosition(Game::WINDOW_WIDTH - PADDLE_OFFSET - rightPaddle->getSize().x, Game::WINDOW_HEIGHT / 2 - rightPaddle->getSize().y / 2);

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

        if (Keyboard::isKeyPressed(Keyboard::Space))
        {
            AddBallPowerup* powerup = new AddBallPowerup();
            powerup->setPosition(300, 300);
            powerup->setGame(this); 
            addPowerup(powerup);
        }
        if (Keyboard::isKeyPressed(Keyboard::BackSpace))
        {
            AddBallPowerup* powerup = new AddBallPowerup();
            powerup->setPosition(400, 500);
            powerup->setGame(this); 
            addPowerup(powerup);
        }
        if (Keyboard::isKeyPressed(Keyboard::T) && !ballSpeedChanged) {
            ChangeBallSpeedPowerup* powerup = new ChangeBallSpeedPowerup(2.0f);
            powerup->setPosition(300, 100);
            addPowerup(powerup);
            ballSpeedChanged = true;
        }


        //if (!newBallSpawned && Keyboard::isKeyPressed(Keyboard::N))
        //{
        //    AddBallPowerup* powerup = new AddBallPowerup(this);
        //    addPowerup(powerup);
        //    powerup->activate();
        //    newBallSpawned = true;
        //}

        updatePaddles(elapsed);
        updateBalls(elapsed);
        updatePowerups(elapsed);

        draw();
    }

}

void Game::draw() {
    window->clear();

    for (auto it = balls.begin(); it != balls.end(); it++) {
        window->draw(**it);
    }

    for (auto it = powerups.begin(); it != powerups.end(); it++)
    {
        window->draw(**it);
    }

    window->draw(*leftPaddle);
    window->draw(*rightPaddle);
    window->display();

}

void Game::updatePaddles(Time elapsed)
{
    if (Keyboard::isKeyPressed(Keyboard::W)) {
        leftPaddle->moveUp(elapsed);
    }
    else if (Keyboard::isKeyPressed(Keyboard::S)) {
        leftPaddle->moveDown(elapsed);
    }

    if (Keyboard::isKeyPressed(Keyboard::Up)) {
        rightPaddle->moveUp(elapsed);
    }
    else if (Keyboard::isKeyPressed(Keyboard::Down)) {
        rightPaddle->moveDown(elapsed);
    }

    leftPaddle->update(elapsed);
    rightPaddle->update(elapsed);
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

        Vector2f leftPos = leftPaddle->getPosition();
        Vector2f rightPos = rightPaddle->getPosition();

        Vector2f leftSize = leftPaddle->getSize();
        Vector2f rightSize = rightPaddle->getSize();

        FloatRect ballRect = FloatRect(pos, Vector2f(radius * 2, radius * 2));

        if (leftPaddle->collidingRight(ballRect)) {
            float offsetY = leftPaddle->getOffsetY(ballRect);
            ball->setPosition(leftPos.x + leftSize.x, pos.y);
            ball->setVelocity(abs(vel.x), vel.y + abs(offsetY) * offsetY * Y_BOUNCE_FACTOR);
            ball->setLastPaddleContact(leftPaddle);
        }
        else if (rightPaddle->collidingLeft(ballRect)) {
            float offsetY = rightPaddle->getOffsetY(ballRect);
            ball->setPosition(rightPos.x - rightSize.x, pos.y);
            ball->setVelocity(-abs(vel.x), vel.y + abs(offsetY) * offsetY * Y_BOUNCE_FACTOR);
            ball->setLastPaddleContact(rightPaddle);
        }


        if (pos.x < 0 || pos.x > Game::WINDOW_WIDTH - radius * 2)
        {
            window->close();
        }
    }
}

bool isFinished(Powerup* powerup)
{
    return powerup->finished;
}


void insertRandomPowerup(Game* game) {
    int r = rand() % 10000;
    Powerup* powerup;
    bool spawned = false;
    if (r == 0) {
        AddBallPowerup* addBallPowerup = new AddBallPowerup();
        addBallPowerup->setGame(game);
        powerup = addBallPowerup;
        game->addPowerup(powerup);
        spawned = true;
    }
    else if (r == 1) {
        LongPaddlePowerup* longPaddlePowerup = new LongPaddlePowerup();
        powerup = longPaddlePowerup;
        game->addPowerup(powerup);
        spawned = true;
    }
    else if (r == 2) {
        ChangeBallSpeedPowerup* ballSpeedPowerup = new ChangeBallSpeedPowerup(1.5);
        ballSpeedPowerup->setBalls(game->getBalls());
        powerup = ballSpeedPowerup;
        game->addPowerup(powerup);
        spawned = true;
    }

    if (spawned) {
        Vector2f size = powerup->getSize();
        int x = rand() % (game->WINDOW_WIDTH - (int) size.x / 2) + size.x / 2;
        int y = rand() % (game->WINDOW_HEIGHT - (int) size.y / 2) + size.y / 2;
        powerup->setPosition(x, y);
    }


}

void Game::updatePowerups(Time elapsed)
{
    powerups.erase(std::remove_if(powerups.begin(), powerups.end(), isFinished), powerups.end());

    insertRandomPowerup(this);

    for (auto it = powerups.begin(); it != powerups.end(); it++)
    {
        Powerup* p = *it;

        Vector2f pos = p->getPosition();
        Vector2f size = p->getSize();


        for (auto bit = balls.begin(); bit != balls.end(); bit++)
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
            if (distX <= size.x / 2 || distY <= size.y / 2 || dx*dx + dy*dy <= (bRad*bRad))
            {
                switch (p->getType()) {
                    case ADD_BALL: {
                        AddBallPowerup *abp = (AddBallPowerup *) p;
                        abp->setGame(this);
                        break;
                    }
                    case CHANGE_BALL_SPEED: {
                        ChangeBallSpeedPowerup *cbsp = (ChangeBallSpeedPowerup *) p;
                        cbsp->setBalls(balls);
                        break;
                    }
                    case LONG_PADDLE: {
                        LongPaddlePowerup *lpp = (LongPaddlePowerup *) p;
                        lpp->setPaddle(b->getLastPaddleContact());
                        break;
                    }
                }
                p->activate();
                break;
            }
        }

        p->update(elapsed);

    }
}
