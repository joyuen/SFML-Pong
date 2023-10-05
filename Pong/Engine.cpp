#include "Engine.h"
#include <iostream> 
using namespace std;


Engine::Engine()
{
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	m_Window.create(VideoMode(resolution.x, resolution.y), "Game Engine", Style::Fullscreen);

	m_Player.setPosition(resolution.x / 2, resolution.y - 20);
	m_Ball.setPosition(resolution.x / 2, 1);

}

void Engine::start()
{
	// Timing
	Clock clock;

	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	while (m_Window.isOpen())
	{
		Time dt = clock.restart();

		float dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds, resolution);
		draw();
	}
}