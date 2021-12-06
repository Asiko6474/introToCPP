#include "Scene.h"
#include<iostream>

void Scene::start()
{
	m_started = true;
}

void Scene::update()
{
	for (int i = 0; i < m_actors.getLength(); i++)
	{
		if (m_actors.getActor(i)->getStarted())
			m_actors.getActor(i)->start();

		m_actors.getActor(i)->update();
	}
}

void Scene::draw()
{
	for (int i = 0; i < m_actors.getLength(); i++)
	{
		if (!m_actors.getActor(i)->getStarted())
			m_actors.getActor(i)->start();

		m_actors.getActor(i)->update();
	}
}

void Scene::end()
{
	Engine::setApplicationShouldClose(true);
}

Scene::Scene()
{
	m_actorCount = 0;
	m_actors = ActorArray();
}

Scene::~Scene()
{
}
bool Scene::addActor(Actor* actor)
{
	m_actors.addActor(actor);
}

bool Scene::getStarted()
{
	
	return false;
}


