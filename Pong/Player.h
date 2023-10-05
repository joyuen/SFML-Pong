#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Player
{
    // All the private variables can only be accessed internally
private:
    Vector2f m_Position;

    //Sprite m_Sprite;

    //Texture m_Texture;

    /*bool m_LeftPressed;
    bool m_RightPressed;*/

    RectangleShape batShape;

    float m_Speed = .5f;

    // Public functions
public:

    Player(float startX = 0, float startY = 0);

    FloatRect getPosition();

    void setPosition(float positionX, float positionY);

    RectangleShape getShape();

    //Sprite getSprite();

    void moveRight();

    void moveLeft();

    void update(float elapsedTime);


};