#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Ball
{
private:
    Vector2f m_Position;

    // A RectangleShape object called ref
    RectangleShape ballShape;

    float xVelocity = .4f;
    float yVelocity = .4f;

public:
    Ball(float startX = 0, float startY = 0);

    FloatRect getPosition();

    void setPosition(float positionX, float positionY);

    RectangleShape getShape();

    float getXVelocity();

    void reboundSides();

    void reboundBatOrTop();

    void hitBottom();

    void update(float dtAsSeconds);

};