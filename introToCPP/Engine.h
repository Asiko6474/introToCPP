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

	Scene** m_scenes;
	int m_sceneCount;
};
