#ifndef Act_h
#define Act_h
namespace dx {
	class Planet;

	class Actor
	{
	private:
		unsigned ID;
		char* Name;
		char* Tag;
		std::vector<Behavior*> AllBehaviors;
		Planet* MyPlanet;
	public:
		Actor();
		Actor(Planet* MyNewPlanet, char* newName = "unset", char* newTag = "Default");
		void Init();
		void Tick();
		template <typename T>
		void AddB();
		template <typename T>
		T* GetB();
		~Actor();
	};
	template<typename T>
	inline void Actor::AddB()
	{
		AllBehaviors.push_back(new T());
	}
	template<typename T>
	inline void Actor::GetB()
	{
		T t;
		for (unsigned i = AllBehaviors.size(); i >= 0; i--)
			if (t.Type == AllBehaviors.at(i)->Type)
				return AllBehaviors.at(i);
			else
				return nullptr;
	}
}
#endif