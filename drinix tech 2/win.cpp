#include "stdafx.h"
#include "win.h"

namespace win {

	bool GameRunning = true;
	extern SDL_Renderer* Renderer = nullptr;
	extern SDL_Window* Window = nullptr;

	void CreateWin(char * Title, int Width, int Height)
	{
		SDL_Init(SDL_INIT_EVERYTHING);
		IMG_Init(IMG_INIT_JPG);
		Window = SDL_CreateWindow(Title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, Width, Height, 0);
		Renderer = SDL_CreateRenderer(Window, -1, 0);
		if (!Window)
			d::FatalError("Could not Create Window!");
		else
			d::Log("Created Window!");
		GameRunning = true;
	}

	int Quit()
	{
		//d::LogImportant("Program Is Quiting!");
		GameRunning = false;
		return 0;
	}

	int CloseDown()
	{
		SDL_DestroyWindow(Window);
		SDL_DestroyRenderer(Renderer);
		IMG_Quit();
		SDL_Quit();
		return 0;
	}

	void SetTitle(char* newTitle)
	{
	}

	void Update()
	{
		//d::LogError(SDL_GetError());
		SDL_RenderClear(Renderer);
		// Do The Rendering of every sprite
		for (int i = 0; i < AllSprites.size(); i++) {
			AllSprites.at(i)->Draw();
		}
		SDL_RenderPresent(Renderer);
		SDL_Event Event;
		while (SDL_PollEvent(&Event)) {
			switch (Event.type)
			{
			case SDL_QUIT:
				Quit();
			case SDL_KEYDOWN:
				switch (Event.key.keysym.scancode)
				{
				case SDL_SCANCODE_A:
					SetResolution(100, 100);
				default:
					break;
				}
			default:
				break;
			}
		}
	}

	void SetResolution(int newW, int newH)
	{
		if (newH == -1)
			newH = newW;
		SDL_SetWindowSize(Window, newW, newH);
	}
}