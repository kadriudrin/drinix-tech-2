#include "stdafx.h"
#include "Print.h"

dx::Planet newp("newp");
dx::Actor myAct;

void HeyWorld() {
	myAct = newp.CreateActor(&myAct, "myAct");
	//myAct.AddB<Print>();
}

int main(int argc, char *argv[])
{
	win::CreateWin("Hey");
	
	newp.Load = HeyWorld;

	do 
	{
		CurrentPlanet->Init();
		while (win::GameRunning) 
		{
			win::Update();
			CurrentPlanet->Tick();
		}
	} while (Changed);

	win::CloseDown();
    return 0;
}