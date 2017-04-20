#include "stdafx.h"
#include "Planet.h"

namespace dx {
	Planet::Planet(char* newName)
	{
		Name = newName;
		CurrentPlanet = this;
		Load = nullptr;
	}

	void Planet::Init()
	{
		if (Load != nullptr)
			Load();
		else
			d::LogError("LOAD IS A NULLPTR!");
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

	void Planet::UnLoad()
	{
		Load = nullptr;
		KillAll();
	}

	Actor Planet::CreateActor(Actor* Prefab, char* NewName, char* NewTag)
	{
		Prefab->SetName(NewName);
		AllActors.push_back(std::move(Prefab));
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

	Pawn Planet::CreatePawn(Pawn * Prefab, const char* SpriteLocation, char * NewName, char * NewTag)
	{
		Prefab->SetName(NewName);
		//Prefab->sprite->SetImage(SpriteLocation);
		//Prefab->sprite->transform = Prefab->transform;
		AllActors.push_back(std::move(Prefab));
		return Pawn(this, NewName, NewTag);
	}

	Pawn * Planet::CreateNewPawn(Pawn * Prefab, const char* SpriteLocation, char * NewName, char * NewTag)
	{
		Prefab->SetName(NewName);		
		//Prefab->sprite->SetImage(SpriteLocation);
		//Prefab->sprite->transform = Prefab->transform;
		AllActors.push_back(Prefab);
		return Prefab;
	}

	void Planet::CreatePawn(char * NewName, char * NewTag)
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
		AllActors.erase(AllActors.begin(), AllActors.begin() + AllActors.size());
		AllActors.clear();
		std::vector<Actor*>().swap(AllActors);
		AllActors.clear();
		AllActors.shrink_to_fit();
	}

	Planet::~Planet()
	{
		UnLoad();
	}
}