#include "SimulationManager.h"
#include <iostream>



void SimulationManager::start()
{
	m_entityCount = 0;
	m_currentFighterIndex = 0;

	Entity wompus = Entity('W', 3, 5, -8);
	Entity redactedLittleSkeleton = Entity('r', 10, 45, 0);
	Entity unclePhil = Entity('U', 1, 0, 1);

	m_entities[0] = wompus;
	m_entities[1] = redactedLittleSkeleton;
	m_entities[2] = unclePhil;
	m_entityCount = 3;

	/*int test = 5;
	Entity* entityPtrs[5];
	Entity** Entities = new Entity * [test];*/


	m_currentFighter1 = &m_entities[0];
	m_currentFighter2 = &m_entities[1];
	m_currentFighterIndex = 2;
}

void SimulationManager::update()
{
	
	m_currentFighter1->printStats();
	m_currentFighter2->printStats();
	system("pause");
	system("cls");
}