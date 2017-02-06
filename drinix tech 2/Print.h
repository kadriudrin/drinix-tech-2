#pragma once
#include "Behaviour.h"
struct Print :
	public dx::Behaviour
{
	Print() : Behaviour("Print") {};
	float posx, posy;
	float dirx, diry;
	float dt = 0.02f;

	void Init() {
		std::cout << "INIT" << std::endl;
	}

	void Tick() {
		posx += dirx * dt;
		posy += diry * dt;
	}
	~Print();
};

