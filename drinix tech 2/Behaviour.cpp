#include "stdafx.h"
#include "Behaviour.h"

namespace dx {
	Behaviour::Behaviour()
	{
	}
	Behaviour::Behaviour(char * newType)
	{
		Type = newType;
	}

	Behaviour::Behaviour(char * newType, Actor * MyNewActor)
	{
		Type = newType;
		MyActor = MyNewActor;
	}

	void Behaviour::Init()
	{
	}


	void Behaviour::Tick()
	{
	}

	Behaviour::~Behaviour()
	{
	}
}