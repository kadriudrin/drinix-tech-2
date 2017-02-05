#include "stdafx.h"
#include "Actor.h"

namespace dx {
	Actor::Actor()
	{
	}
	Actor::Actor(Planet* MyNewPlanet, char* newName, char* newTag)
	{
		MyPlanet = MyNewPlanet;
	}

	void Actor::Init()
	{
		for (unsigned i = 0; i < AllBehaviours.size(); i++)
			AllBehaviours.at(i)->Init();
	}

	void Actor::Tick()
	{
		for (unsigned i = 0; i < AllBehaviours.size(); i++)
			AllBehaviours.at(i)->Tick();
	}

	void Actor::SetName(char * NewName)
	{
		Name = NewName;
	}

	void Actor::PrintAll()
	{
		if (AllBehaviours.size() > 0) {
			std::cout << Name << " Is Printing: " << AllBehaviours.size() << " Behaviours: " << std::endl;
			for (unsigned i = 0; i < AllBehaviours.size(); i++)
				std::cout << "AllBehaviours(" << i << "): " << AllBehaviours.at(i)->Type << std::endl;
			std::cout << Name << " Finished Printing it's Behaviours." << std::endl << std::endl;
		}
		else {
			std::cout << Name << " Does not have any Behaviours." << std::endl << std::endl;
		}

	}

	Actor::~Actor()
	{
	}
}