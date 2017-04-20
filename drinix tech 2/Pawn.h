#ifndef Pawn_h
#define Pawn_h

class Transform;
class Sprite;

namespace dx {
	class Actor;

	class Pawn :
		public Actor
	{
	public:
		Transform* transform;
		Sprite* sprite;

		Pawn(const char* Loc);
		Pawn(Planet* myp, char* name = "unset", char* tag = "Default") : Actor(myp, name, tag) {
			this->AddB<Transform>();
			this->AddB<Sprite>(this);
			transform = this->GetB<Transform>();
			sprite = this->GetB<Sprite>();
		};

		~Pawn();
	};
}
#endif