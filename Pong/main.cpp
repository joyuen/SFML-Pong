#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Ball.h"
#include "Engine.h"
#include <sstream>
#include <cstdlib>

using namespace sf;

int main()
{
    // Declare an instance of Engine
    Engine engine;

    // Start the engine
    engine.start();

    // Quit in the usual way when the engine is stopped
    return 0;
}