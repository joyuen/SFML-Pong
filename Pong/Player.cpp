#include "Player.h"
#include <iostream> 
using namespace std;

Player::Player(float startX, float startY)
{
	m_Position.x = startX;
	m_Position.y = startY;

	batShape.setSize(sf::Vector2f(100, 5));
	batShape.setPosition(m_Position);
}

FloatRect Player::getPosition()
{
	return batShape.getGlobalBounds();
}

void Player::setPosition(float positionX, float positionY)
{
	m_Position.x = positionX;
	m_Position.y = positionY;
	batShape.setPosition(m_Position);
}

RectangleShape Player::getShape()
{
	return batShape;
}

void Player::moveRight()
{
	m_Position.x += m_Speed;
}

void Player::moveLeft()
{
	m_Position.x -= m_Speed;
}

void Player::update(float elapsedTime)
{
	batShape.setPosition(m_Position);
}