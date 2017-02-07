#ifndef Win_h
#define Win_h

namespace win {

	extern bool GameRunning;
	extern sf::RenderWindow* Window;

	void CreateWin(char* Title, int Width = 640, int Height = 480);
	int Quit();
	int CloseDown();
	void SetTitle();
	void Update();
	void SetResolution();
}

#endif