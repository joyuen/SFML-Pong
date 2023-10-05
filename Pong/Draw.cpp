#include "Engine.h"
#include "global.h"
#include <sstream>

void Engine::draw()
{
	Text hud;
	Font font;
	font.loadFromFile("DS-DIGIT.TTF");
	hud.setFont(font);
	hud.setCharacterSize(75);
	hud.setFillColor(Color::Red);

	// Update the HUD text
	std::stringstream ss;
	ss << "Score:" << score << "    Lives:" << lives;
	hud.setString(ss.str());

	// Remove last frame
	m_Window.clear(Color::White);

	m_Window.draw(m_Player.getShape());

	m_Window.draw(m_Ball.getShape());

	m_Window.draw(hud);

	//m_Window.draw(m_BackgroundSprite);
	//m_Window.draw(some sprite here)

	m_Window.display();

}