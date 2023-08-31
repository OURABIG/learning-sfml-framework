#include "OURA.h"



OURA::OURA(){
	this->world = new b2World(b2Vec2(0.0f, 981.0f));

	//creating dynamicbody
	b2BodyDef bodyDef;
	bodyDef.type = b2_dynamicBody;
	bodyDef.position.Set(400.0f, 100.0f);
	dynamicBody = world->CreateBody(&bodyDef);

	b2CircleShape circleShape;
	circleShape.m_radius = 20.0f;

	b2FixtureDef fixtureDef;
	fixtureDef.shape = &circleShape;
	fixtureDef.density = 1.0f;
	dynamicBody->CreateFixture(&fixtureDef);
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

	float TimeStep = 1.0f / 60.0f;
	int velocityIterations = 6;
	int positionIteration = 2;
	world->Step(TimeStep, velocityIterations, positionIteration);

	b2Vec2 position = dynamicBody->GetPosition();
	std::cout << "Circle Position: x = " << position.x << ", y = " << position.y << std::endl;

	sf::CircleShape circleShape(20.0f);
	circleShape.setFillColor(sf::Color::White);
	circleShape.setPosition(sf::Vector2f(position.x - 20.0f, position.y - 20.0f));

	window->draw(circleShape);

	window->display();
}
