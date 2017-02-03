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
	public:
		Act();
		Act(Planet newPlanet, std::string newName = "unset", std::string newTag = "Default");
		void Init();
		void Tick();
		~Act();
	};
}
#endif