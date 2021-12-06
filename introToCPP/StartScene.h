#pragma once
#include "Scene.h"
#include <iostream>

class StartScene :
	public Scene
{
public:
	void draw() override;
	void update() override;
};

