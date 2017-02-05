#include "stdafx.h"
#include "Print.h"
// drinix tech 2

void GenActs(dx::Planet pn) {
	for (unsigned i = 0; i < 1000; i++) {
		std::unique_ptr<dx::Actor> hey(pn.CreateNewActor(new dx::Actor()));
		hey->AddB<Print>();
	}
}

int main()
{
	dx::Planet newp("newp");

	int numEntities = 1000000;

	for (unsigned i = 0; i < numEntities; i++) {
		std::unique_ptr<dx::Actor> hey(newp.CreateNewActor(new dx::Actor()));
		hey->AddB<Print>();
		if (i % 2) {

		}
		//std::cout << i << std::endl;
	}

	 
	newp.KillAll();

    return 0;
}