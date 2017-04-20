#ifndef Behaviours_h
#define Behaviours_h

struct Transform : 
	public dx::Behaviour {
	
	Transform() : dx::Behaviour("Transform") {};
	
	Vec2 Pos, Scl;
	float Rot;
};

struct Sprite :
	public dx::Behaviour {

	Sprite() : dx::Behaviour("Movement") {};
	Sprite(dx::Actor* newA, const char* Location = "unset");

	Transform* transform;

	void Draw() {
		MyRect.x = transform->Pos.x;
		MyRect.y = transform->Pos.y;
		SDL_RenderCopy(win::Renderer, MyTexture, 0, &MyRect);
	}

	void SetImage(const char* Loc);
private:
	SDL_Rect MyRect;
	SDL_Surface* MySurface = nullptr;
	SDL_Texture* MyTexture = nullptr;
	char* SpriteLocation = nullptr;
};

struct Move :
	public dx::Behaviour
{
	Move() : dx::Behaviour("Move") {};
	Move(dx::Actor* nAct) : dx::Behaviour("Move", nAct) {};

	Transform* trans;

	void Init() {
		trans = MyActor->GetB<Transform>();
	}

	void Tick() {
		trans->Pos.x += 10;
	}
};
#endif