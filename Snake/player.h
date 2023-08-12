#pragma once

#include "raylib.h"

class Player
{
public:
	Player();
	~Player();

	void update();
	void render();

private:
	void initTextures();
	void initVariables();

	void unload();
};