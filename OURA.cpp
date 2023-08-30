#include "OURA.h"



OURA::OURA() {
	
}

OURA::~OURA() {

}
void OURA::createWindow(sf::RenderWindow* window, sf::Vector2u WindowSize, sf::VideoMode Mode, std::string WindowTitle, int FPS) {
	window->create(Mode, WindowTitle);
	window->setSize(WindowSize);
	window->setFramerateLimit(FPS);
}

void OURA::Draw(sf::RenderWindow* window)
{
	window->clear();


	window->display();
}
