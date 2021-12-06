#pragma once
#include "Entity.h"
#include "Scene.h"
class Engine
{
public:
	Engine();
	~Engine();
	void run();

	static bool getApplicationShouldClose() { return m_applicationShouldClose; }
	static void setApplicationShouldClose(bool value) { m_applicationShouldClose = value; }

	void addScene(Scene* scene);
	Scene* getCurrentScene();
	void setCurrentScene(int index);
private:
	void start();
	void update();
	void end();
	void draw();
private:
	static bool m_applicationShouldClose;

	//To be moved
	Entity m_entities[3];
	Entity* m_currentFighter1;
	Entity* m_currentFighter2;
	Entity* entites;
	int m_currentFighterIndex;
	int m_entityCount;

	Scene** m_scenes;
	int m_sceneCount;
};
