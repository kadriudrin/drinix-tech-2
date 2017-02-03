#ifndef Behaviour_h
#define Behaviour_h
namespace dx {
	class Actor;

	class Behaviour
	{
	protected:
		Actor* MyActor;
	public:
		char* Type;
		Behaviour();
		Behaviour(char* newType);
		Behaviour(char* newType, Actor* MyNewActor);
		virtual void Init();
		virtual void Tick();
		~Behaviour();
	};
}
#endif