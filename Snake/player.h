#pragma once

#include <iostream>
#include "raylib.h"
#include "coins.h"

class Coins;

class Player
{
public:
	Player();
	~Player();

	void update();
	void render();
	
	bool isAlive;

	Rectangle player;

private:
	Coins* coin_ply_obj;

	void initTextures();
	void initVariables();

	Vector2 playerPos, playerSpeed;

	void unload();
};