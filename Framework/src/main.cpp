#include "OURA.h"



int main() {
	
	sf::RenderWindow window;
	sf::Vector2u WindowSize = { 800, 600 };
	OURA game;
	game.createWindow(&window, WindowSize, sf::VideoMode::getDesktopMode(), "MyGame", 60);

	sf::Event event;
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		game.Draw(&window);

		
	}
	
	return 0;
}