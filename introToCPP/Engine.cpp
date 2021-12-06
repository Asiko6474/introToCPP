#include "Engine.h"
#include <iostream>

bool Engine::m_applicationShouldClose = false;

Engine::Engine()
{
	m_applicationShouldClose = false;
}

Engine::~Engine()
{

}

void Engine::run()
{
	start();

	while (!getApplicationShouldClose())
	{
		draw();
		update();
	}

	end();
}

void Engine::addScene(Scene* scene)
{
}

Scene* Engine::getCurrentScene()
{
	return nullptr;
}

void Engine::setCurrentScene(int index)
{
}

void Engine::start()
{
	m_sceneCount = 0;
}
void Engine::update()
{
	m_sceneCount++;
}

void Engine::draw()
{

}

void Engine::end()
{
}


