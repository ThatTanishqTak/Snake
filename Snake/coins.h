#pragma once

#include "raylib.h"

class Coins
{
public:
	Coins();
	~Coins();

	void update();
	void render();

private:
	void initVariables();
	void initTextures();

	void unload();
};