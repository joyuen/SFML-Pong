#include "Ball.h"
#include <iostream> 
using namespace std;

Ball::Ball(float startX, float startY)
{
    m_Position.x = startX;
    m_Position.y = startY;

    ballShape.setSize(sf::Vector2f(10, 10));
    ballShape.setPosition(m_Position);
}

FloatRect Ball::getPosition()
{
    return ballShape.getGlobalBounds();
}

void Ball::setPosition(float positionX, float positionY)
{
    m_Position.x = positionX;
    m_Position.y = positionY;
    ballShape.setPosition(m_Position);
}

RectangleShape Ball::getShape()
{
    return ballShape;
}

float Ball::getXVelocity()
{
    return xVelocity;
}

void Ball::reboundSides()
{
    xVelocity = -xVelocity;
}

void Ball::reboundBatOrTop()
{
    m_Position.y -= (yVelocity * 30);
    yVelocity = -yVelocity;

}

void Ball::hitBottom()
{
    m_Position.y = 1;
    m_Position.x = 540;
}

void Ball::update(float dtAsSeconds)
{
    // Update the ball position variables
    m_Position.y += yVelocity;
    m_Position.x += xVelocity;

    // Move the ball and the bat
    ballShape.setPosition(m_Position);
}