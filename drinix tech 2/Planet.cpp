#include "stdafx.h"
#include "Planet.h"
namespace dx {
	Planet::Planet(std::string newName)
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

	Act Planet::CreateAct()
	{
		return Act();
	}

	Planet::~Planet()
	{
	}
}