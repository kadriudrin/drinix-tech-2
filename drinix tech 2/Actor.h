#ifndef Actor_h
#define Actor_h
namespace dx {
	class Planet;

	class Actor
	{
	private:
		unsigned ID;
		std::vector<std::unique_ptr<Behaviour>> AllBehaviours;
	public:
		char* Name;
		char* Tag;
		Planet* MyPlanet;
		Actor();
		Actor(Planet* MyNewPlanet, char* newName = "unset", char* newTag = "Default");
		void Init();
		void Tick();
		template <typename T>
		void AddB();
		template <typename T>
		T* GetB();
		void SetName(char* NewName);
		void PrintAll();
		~Actor();
	};
	template<typename T>
	inline void Actor::AddB()
	{
		AllBehaviours.push_back(new T());
	}
	template<typename T>
	inline T* Actor::GetB()
	{
		T t;
		for (unsigned i = 0; i < AllBehaviours.size(); i++)
			if (t.Type == AllBehaviours.at(i)->Type) {
				return dynamic_cast<T*>(AllBehaviours.at(i));
				break;
			}
	}
}
#endif