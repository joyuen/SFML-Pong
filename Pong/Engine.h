#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Ball.h"

using namespace sf;

class Engine
{
private:

    // A regular RenderWindow
    RenderWindow m_Window;

    // Declare a sprite and a Texture for the background
    /*Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;*/

    Player m_Player;
    Ball m_Ball;

    // Private functions for internal use only
    void input();
    void update(float dtAsSeconds, Vector2f resolution);
    void draw();

public:
    // The Engine constructor
    Engine();

    // start will call all the private functions
    void start();
};