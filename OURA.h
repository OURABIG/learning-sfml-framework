#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

class OURA
{
	public:
		void createWindow(sf::RenderWindow* window, sf::Vector2u WindowSize, sf::VideoMode Mode, std::string WindowTitle, int FPS);
		void Draw(sf::RenderWindow* window);
		OURA();
		~OURA();
	private:
		
};


