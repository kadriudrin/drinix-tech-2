#include "stdafx.h"
#include "d.h"

namespace d {

	bool DebugMode = true;

	void d::Log(const char* const _Format, ...)
	{
		if (DebugMode) {
			printf(_Format);
			std::cout << std::endl;
		}
	}

	void d::LogImportant(const char* const _Format, ...)
	{
		if (DebugMode) {
			system("color A2");
			printf(_Format);
			std::cout << std::endl;
			Pause();
		}
	}

	void d::LogError(const char* const _Format, bool IsPause, ...)
	{
		if (DebugMode) {
			if (_Format != "") {
				system("color C");
				printf(_Format);
				std::cout << std::endl;
				if (IsPause)
					Pause();
			}
		}
	}

	void d::LogWarning(const char* const _Format, ...)
	{
		if (DebugMode) {
			system("color E");
			printf(_Format);
			std::cout << std::endl;
		}
	}

	void d::FatalError(const char* const _Format, ...)
	{
		if (DebugMode) {
			system("color CF");
			printf(_Format);
			std::cout << std::endl;
			Pause();
			win::Quit();
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