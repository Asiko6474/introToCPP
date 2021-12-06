#include "StartScene.h"

void StartScene::draw()
{
	std::cout << "Ah welcome welcome to the monster battle thingy 2: electric boogaloo" << std::endl;
	std::cout << "Press 1 to start, Press 2 to exit (why did you come here then?)" << std::endl;
}

void StartScene::update()
{
	char input;
	std::cin >> input;

	if (input = 1)
	{
		//continue
	}
	else if (input = 2)
	{
		//exit
	}
	else
	{
		std::cout << "INVALID INPUT" << std::endl;
		system("pause");
		system("cls");
		return;
	}
}
