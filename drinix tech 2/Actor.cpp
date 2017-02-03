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
	}

	void Actor::Tick()
	{
	}

	Actor::~Actor()
	{
	}
}