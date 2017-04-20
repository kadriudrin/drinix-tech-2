#ifndef Win_h
#define Win_h

namespace win {

	extern bool GameRunning;
	extern SDL_Renderer* Renderer;
	extern SDL_Window* Window;

	void CreateWin(char* Title, int Width = 640, int Height = 480);
	int Quit();
	int CloseDown();
	void SetTitle();
	void Update();
	void SetResolution(int, int newH = -1);
}

#endif