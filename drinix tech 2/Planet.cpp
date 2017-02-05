#include "stdafx.h"
#include "Planet.h"

namespace dx {
	Planet::Planet(char* newName)
	{
		Name = newName;
	}

	void Planet::Init()
	{
		for (unsigned i = 0; i < AllActors.size(); i++) {
			AllActors.at(i)->Init();
		}
	}

	void Planet::Tick()
	{
		for (unsigned i = 0; i < AllActors.size(); i++) {
			AllActors.at(i)->Tick();
		}
	}

	Actor Planet::CreateActor(Actor* Prefab, char* NewName, char* NewTag)
	{
		Prefab->SetName(NewName);
		AllActors.push_back(Prefab);
		return Actor(this, NewName, NewTag);
	}

	Actor* Planet::CreateNewActor(Actor* Prefab, char* NewName, char* NewTag)
	{
		Prefab->SetName(NewName);
		AllActors.push_back(Prefab);
		return Prefab;
	}

	void Planet::CreateActor(char * NewName, char * NewTag)
	{
		AllActors.push_back(&Actor(this, NewName, NewTag));
	}

	void Planet::PrintAll()
	{
		if (AllActors.size() > 0) {
			std::cout << Name << " Is Printing: " << AllActors.size() << " Actors: " << std::endl;
			for (unsigned i = 0; i < AllActors.size(); i++)
				std::cout << "AllActors(" << i << "): " << AllActors.at(i)->Name << std::endl;
			std::cout << Name << " Finished Printing it's AllActors." << std::endl << std::endl;
		}
		else {
			std::cout << Name << " Does not have any Actors." << std::endl << std::endl;
		}
	}

	int Planet::NumOfActors()
	{
		return AllActors.size();
	}

	void Planet::KillAll()
	{
		std::vector<Actor*>().swap(AllActors);
		AllActors.clear();
		AllActors.shrink_to_fit();
	}

	Planet::~Planet()
	{
	}
}