#ifndef Actor_h
#define Actor_h
namespace dx {
	class Planet;

	class Actor
	{
	private:
		unsigned ID;
		char* Name;
		char* Tag;
		std::vector<Behaviour*> AllBehaviours;
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
		AllBehaviours.push_back(new T());
	}
	template<typename T>
	inline void Actor::GetB()
	{
		T t;
		for (unsigned i = AllBehaviours.size(); i >= 0; i--)
			if (t.Type == AllBehaviours.at(i)->Type)
				return AllBehaviours.at(i);
			else
				return nullptr;
	}
}
#endif