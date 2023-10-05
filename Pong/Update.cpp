#include "Engine.h"
#include "global.h"
#include <iostream> 
using namespace std;
using namespace sf;

void Engine::update(float dtAsSeconds, Vector2f resolution)
{
	if (m_Ball.getPosition().top > resolution.y)
	{
		m_Ball.hitBottom();

		lives --;

		if (lives < 1)
		{
			score = 0;
			lives = 3;
		}
	}

	if (m_Ball.getPosition().top < 0) {
		m_Ball.reboundBatOrTop();
		score++;
	}

	if (m_Ball.getPosition().left < 0 || m_Ball.getPosition().left + 10 > resolution.x)
	{
		m_Ball.reboundSides();
	}

	if (m_Ball.getPosition().intersects(m_Player.getPosition()))
	{
		m_Ball.reboundBatOrTop();
	}

	m_Player.update(dtAsSeconds);
	m_Ball.update(dtAsSeconds);
}