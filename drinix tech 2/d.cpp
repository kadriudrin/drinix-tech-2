#include "stdafx.h"
#include "d.h"

namespace d {

	bool DebugMode = true;

	void d::Log(char * Msg)
	{
		if (DebugMode)
			std::cout << "cL:  " << Msg << std::endl;
	}

	void LogImportant(char * Msg)
	{
		if (DebugMode) {
			system("color A2");
			std::cout << "\ncIMPORTANT:  " << Msg << std::endl;
			Pause();
		}
	}

	void d::LogError(char * Msg)
	{
		if (DebugMode) {
			system("color C");
			std::cout << "\ncERROR:  " << Msg << std::endl;
			win::Quit();
		}
	}

	void d::LogWarning(char * Msg)
	{
		if (DebugMode) {
			system("color E");
			std::cout << "cWARNING:  " << Msg << std::endl;
		}
	}

	void d::FatalError(char * Msg)
	{
		if (DebugMode) {
			system("color CF");
			std::cout << "\n\nFATAL ERROR:  " << Msg << std::endl << "TERMINATING EXCECUTION !" << std::endl;
			Pause();
		}
	}

	void Clear()
	{
		system("cls");
	}

	void Pause()
	{
		system("pause");
	}

}