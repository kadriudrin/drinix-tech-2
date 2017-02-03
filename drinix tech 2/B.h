#ifndef B_h
#define B_h
namespace dx {
	class Actor;

	class Behavior
	{
	protected:
		Actor* MyActor;
	public:
		char* Type;
		Behavior();
		Behavior(char* newType);
		Behavior(char* newType, Actor* MyNewActor);
		virtual void Init();
		virtual void Tick();
		~Behavior();
	};
}
#endif