#pragma once
#include <SDL\SDL.h>
#include <SDL\SDL_image.h>
#include <vector>
#include <iostream>
#include <windows.h>
#include <string>

#ifndef Behaviour_h
#include "Behaviour.h"
#endif 
#ifndef Actor_h
#include "Actor.h"
#endif
#ifndef Pawn_h
#include "Pawn.h"
#endif
#ifndef Planet_h
#include "Planet.h"
extern dx::Planet* CurrentPlanet;
extern std::vector<dx::Planet*> AllPlanets;
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
#ifndef Vec2_h
#include "Vec2.h"
#endif
#ifndef Behaviours_h
#include "Behaviours.h"
extern std::vector<Sprite*> AllSprites;
#endif