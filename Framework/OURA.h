#pragma once
#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>
#include <box2d/b2_block_allocator.h>
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
		b2World* world;
		b2Body* dynamicBody;
		
};


