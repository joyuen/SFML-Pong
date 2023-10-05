#include "Engine.h"

void Engine::input()
{
	// Handle player inputs
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		m_Window.close();
	}

	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		m_Player.moveLeft();
	}
	else if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		m_Player.moveRight();
	}
}