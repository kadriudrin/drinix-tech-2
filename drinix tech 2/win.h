#ifndef Win_h
#define Win_h

namespace win {

	extern bool GameRunning;
	extern SDL_Window* Window;

	void Init();
	void CreateWin(char* Title, int Width = 640, int Height = 480);
	int Quit();
	void SetTitle();
	void SetResolution();
}

#endif