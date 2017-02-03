#include "stdafx.h"
#include "B.h"

namespace dx {
	Behavior::Behavior()
	{
	}
	Behavior::Behavior(char * newType)
	{
		Type = newType;
	}

	Behavior::Behavior(char * newType, Actor * MyNewActor)
	{
		Type = newType;
		MyActor = MyNewActor;
	}

	void Behavior::Init()
	{
	}


	void Behavior::Tick()
	{
	}

	Behavior::~Behavior()
	{
	}
}