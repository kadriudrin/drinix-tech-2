#include "stdafx.h"
#include "Behaviours.h"

Sprite::Sprite(dx::Actor* newA, const char* Location) : dx::Behaviour("Movement", newA)
{
	if (Location != "unset") {
		MySurface = IMG_Load(Location);
		if (!MySurface) {
			d::LogError("Failed To Load Image at Location: ", Location);
		}
		else {
			MyTexture = SDL_CreateTextureFromSurface(win::Renderer, MySurface);
			if (!MyTexture) {
				d::LogError("Failed To Create Texture from Surface at Location: ", Location);
			}
			else {
				MyRect.w = MySurface->w;
				MyRect.h = MySurface->h;
				MyRect.x = MyRect.y = 0;
				SDL_FreeSurface(MySurface);
				transform = MyActor->GetB<Transform>();
			}
		}
	}
	AllSprites.push_back(this);
}
void Sprite::SetImage(const char * Loc)
{
	MySurface = IMG_Load(Loc);
	if (!MySurface) {
		d::LogError("Failed To Load Image at Location: ", Loc);
	}
	else {
		MyTexture = SDL_CreateTextureFromSurface(win::Renderer, MySurface);
		if (!MyTexture) {
			d::LogError("Failed To Create Texture from Surface at Location: ", Loc);
		}
		else {
			MyRect.w = MySurface->w;
			MyRect.h = MySurface->h;
			MyRect.x = MyRect.y = 0;
			SDL_FreeSurface(MySurface);
			transform = MyActor->GetB<Transform>();
		}
	}
};