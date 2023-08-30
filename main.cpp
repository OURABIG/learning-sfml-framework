#include <SFML/Graphics.hpp>
#include <iostream>


int main() {
	sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Testing");
	sf::Vector2u size = { 800, 600 };
	window.setSize(size);
	window.setFramerateLimit(60);

	sf::RectangleShape rectangle;
	rectangle.setFillColor(sf::Color::Green);
	rectangle.setSize({ 100.0f, 100.0f });
	rectangle.setPosition({ 200, 200 });
	

	sf::Event event;
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(rectangle);

		window.display();
	}
	
	return 0;
}