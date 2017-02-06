#include "stdafx.h"
#include "win.h"

namespace win {

	bool GameRunning = true;

	void Init()
	{
		SDL_Init(SDL_INIT_EVERYTHING);
	}

	void CreateWin(char * Title, int Width, int Height)
	{
		Init();
		Window = SDL_CreateWindow(Title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, Width, Height, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
		if (Window == nullptr)
			d::FatalError("Could not Create Window!");
	}

	int Quit()
	{
		d::LogImportant("Program Is Quiting!");
		SDL_Quit();
		GameRunning = false;
		return 0;
	}
	void SetTitle()
	{
	}
	void SetResolution()
	{
	}
}