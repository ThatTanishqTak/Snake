#pragma once

#include "raylib.h"

class Coins
{
public:
	Coins();
	~Coins();

	void update();
	void render();

	float radius;
	Vector2 circleCenter;

private:
	void initVariables();
	void initTextures();

	void unload();
};