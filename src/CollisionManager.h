#pragma once

#ifndef BOMBERMAN_COLLISIONMANAGER_H
#define BOMBERMAN_COLLISIONMANAGER_H

#include "SDL.h"
#include "SDL_image.h"


//checks collision between two rects
struct CollisionManager
{
	static bool checkCollision (const SDL_Rect &a, const SDL_Rect &b)
	{
		// Rectangular border
		int leftA, leftB;
		int rightA, rightB;
		int topA, topB;
		int bottomA, bottomB;

		// Calculate rectangle A The length of
		leftA = a.x;
		rightA = a.x + a.w;
		topA = a.y;
		bottomA = a.y + a.h;

		// Calculate rectangle B The length of
		leftB = b.x;
		rightB = b.x + b.w;
		topB = b.y;
		bottomB = b.y + b.h;
		//If any of the sides from A are outside of B
		if (bottomA <= topB)
			return false;
		if (topA >= bottomB)
			return false;
		if (rightA <= leftB)
			return false;
		if (leftA >= rightB)
			return false;
		//If none of the sides from A are outside B
		return true;
	}
};

#endif //BOMBERMAN_COLLISIONMANAGER_H
