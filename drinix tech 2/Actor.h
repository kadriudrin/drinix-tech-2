#ifndef Actor_h
#define Actor_h
namespace dx {
	class Planet;

	class Actor
	{
	private:
		unsigned ID;
		std::vector<Behaviour*> AllBehaviours;
	public:
		char* Name;
		char* Tag;
		Planet* MyPlanet;
		Actor();
		Actor(Planet* MyNewPlanet, char* newName = "unset", char* newTag = "Default");
		void Init();
		void Tick();
		template <typename T, typename ...Args>
		void AddB(Args && ...args);
		template <typename T>
		T* GetB();
		void SetName(char* NewName);
		void PrintAll();
		~Actor();
	};
	template <typename T, typename ...Args>
	inline void Actor::AddB(Args && ...args)
	{
		AllBehaviours.push_back(new T(std::forward<Args>(args)...));
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