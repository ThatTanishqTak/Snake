#pragma once

#include <iostream>
#include "raylib.h"

class Player
{
public:
	Player();
	~Player();

	void update();
	void render();
	
	bool isAlive, collision;

	Rectangle player;

private:
	void initTextures();
	void initVariables();

	Vector2 playerPos, playerSpeed;

	void unload();
};