#include "stdafx.h"
#include "Pawn.h"

namespace dx {
	Pawn::Pawn(const char* Loc) : Actor() {
		this->AddB<Transform>();
		this->AddB<Sprite>(this, Loc);
		transform = this->GetB<Transform>();
		sprite = this->GetB<Sprite>();
		sprite->transform = transform;
	};
	Pawn::~Pawn()
	{
	}
}