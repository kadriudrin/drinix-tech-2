#pragma once
#include <SDL\SDL.h>
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
extern dx::Planet* CurrentPlanet;
extern bool Changed;
#endif 
#ifndef D_h
#include "d.h"
#endif
#ifndef Win_h
#include "win.h"
#endif