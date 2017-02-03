#ifndef Planet_h
#define Planet_h
namespace dx {
	class Planet
	{
	private:
		std::vector<Act*> AllActors;
		std::string Name;
	public:
		Planet(std::string newName);
		void Init();
		void Tick();
		Act CreateAct();
		~Planet();
	};
}
#endif