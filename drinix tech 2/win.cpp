#include "stdafx.h"
#include "win.h"

namespace win {

	bool GameRunning = true;
	sf::RenderWindow* Window = nullptr;

	void CreateWin(char * Title, int Width, int Height)
	{
		sf::ContextSettings settings;
		settings.depthBits = 24;
		settings.majorVersion = 3;
		settings.minorVersion = 3;
		settings.antialiasingLevel = 8;
		Window = new sf::RenderWindow(sf::VideoMode(Width, Height), Title, sf::Style::Default, settings);
		if (Window == nullptr)
			d::FatalError("Could not Create Window!");
		else
			d::Log("Created Window!");
		GameRunning = true;
		glewInit();
		glViewport(0, 0, Width, Height);
	}

	int Quit()
	{
		d::LogImportant("Program Is Quiting!");
		GameRunning = false;
		Window->close();
		return 0;
	}

	int CloseDown()
	{
		delete Window;
		return 0;
	}

	void SetTitle(char* newTitle)
	{
	}

	void Update()
	{
		glClearColor(0.0, 1.0, 1.0, 1.0);
		glClear(GL_DEPTH_BUFFER | GL_COLOR_BUFFER_BIT);
		Window->display();
		sf::Event Event;
		while (Window->pollEvent(Event)) {
			if (Event.type == sf::Event::Closed)
				Quit();
		}
	}

	void SetResolution()
	{
	}
}