#pragma once
#include "Behaviour.h"
struct Print :
	public dx::Behaviour
{
	Print() : Behaviour("Print") {};

	void Init() {
		d::Log("INIT");
	}

	void Tick() {
		d::Log("TICK");
	}
	~Print();
};

