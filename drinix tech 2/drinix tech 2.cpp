#include "stdafx.h"
#include "Print.h"

dx::Planet newp("newp");
dx::Pawn myPawn("Src/Cover.jpg");

void HeyWorld() {
	myPawn = newp.CreatePawn(&myPawn, "Src/Cover.jpg");
	myPawn.AddB<Move>(&myPawn);
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