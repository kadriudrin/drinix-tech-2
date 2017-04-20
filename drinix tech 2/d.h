#ifndef D_h
#define D_h

namespace d {
	extern bool DebugMode;
	void Log(const char* const _Format, ...);
	void LogImportant(const char* const _Format, ...);
	void LogError(const char* const _Format, bool IsPause = false, ...);
	void LogWarning(const char* const _Format, ...);
	void FatalError(const char* const _Format, ...);
	void Clear();
	void Pause();
}

#endif