#ifndef Act_h
#define Act_h
namespace dx {
	class Act
	{
	private:
		unsigned ID;
		std::string Name;
		std::string Tag;
		Planet MyPlanet;
		int a = 0 + 0 + 0 + 0 + 0 + 0;
	public:
		Act();
		Act(Planet newPlanet, std::string newName = "unset", std::string newTag = "Default");
		void Init();
		void Tick();
		~Act();
	};
}
#endif