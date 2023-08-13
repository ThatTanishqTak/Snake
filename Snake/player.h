#pragma once

#include "raylib.h"

class Player
{
public:
	Player();
	~Player();

	void update();
	void render();

	Rectangle player;

private:
	void initTextures();
	void initVariables();

	Vector2 playerPos, playerSpeed;

	void unload();
};