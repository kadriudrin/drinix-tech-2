#pragma once
#include "Behaviour.h"
class Print :
	public dx::Behaviour
{
public:
	Print() : Behaviour("Print") {};
	float posx, posy;
	float dirx, diry;
	float dt = 0.02f;

	void Tick() {
		posx += dirx * dt;
		posy += diry * dt;
	}
	~Print();
};

