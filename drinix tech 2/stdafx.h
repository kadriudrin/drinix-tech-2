#pragma once
#include <GL\glew.h>
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <vector>
#include <iostream>
#include <memory>
#include <Windows.h>
//#undef main

#ifndef Behaviour_h
#include "Behaviour.h"
#endif 
#ifndef Actor_h
#include "Actor.h"
#endif 
#ifndef Planet_h
#include "Planet.h"
extern std::unique_ptr<dx::Planet> CurrentPlanet;
extern std::vector<std::unique_ptr<dx::Planet>> AllPlanets;
extern bool Changed;
namespace dx {
	void RunPlanet(char* PlanetName);
}
#endif 
#ifndef D_h
#include "d.h"
#endif
#ifndef Win_h
#include "win.h"
#endif