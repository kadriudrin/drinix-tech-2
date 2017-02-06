#ifndef D_h
#define D_h

namespace d {
	extern bool DebugMode;
	void Log(char* Msg);
	void LogImportant(char* Msg);
	void LogError(char* Msg);
	void LogWarning(char* Msg);
	void FatalError(char* Msg);
	void Clear();
	void Pause();
}

#endif