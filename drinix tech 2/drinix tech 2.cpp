#include "stdafx.h"
#include "Print.h"

int main(int argc, char *argv[])
{
	win::CreateWin("Hey");

	dx::Planet newp("newp");

	dx::Actor myAct = newp.CreateActor(&myAct, "myAct");
	myAct.AddB<Print>();
	    
	do 
	{
		CurrentPlanet->Init();
		while (win::GameRunning) 
		{
			CurrentPlanet->Tick();
		}
	} while (Changed);

	win::Quit();

    return 0;
}