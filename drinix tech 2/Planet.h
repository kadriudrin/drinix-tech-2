#ifndef Planet_h
#define Planet_h
namespace dx {
	class Planet
	{
	private:
		std::vector<Actor*> AllActors;
		char* Name;
	public:
		Planet(char* newName);
		void Init();
		void Tick();
		Actor CreateActor();
		~Planet();
	};
}
#endif