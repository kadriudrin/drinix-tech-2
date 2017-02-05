#ifndef Planet_h
#define Planet_h
namespace dx {
	class Planet
	{
	private:
		char* Name;
		std::vector<Actor*> AllActors;
	public:
		Planet(char* newName);
		void Init();
		void Tick();
		Actor CreateActor(Actor* Prefab, char* NewName = "unset", char* NewTag = "Default");
		Actor* CreateNewActor(Actor* Prefab, char* NewName = "unset", char* NewTag = "Default");
		void CreateActor(char* NewName = "unset", char* NewTag = "Default");
		void PrintAll();
		int NumOfActors();
		void KillAll();
		~Planet();
	};
}
#endif