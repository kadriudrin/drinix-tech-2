#ifndef B_h
#define B_h
namespace dx {
	class Behavior
	{
	public:
		Behavior();
		virtual void Init();
		virtual void Tick();
		~Behavior();
	};
}
#endif