#pragma once

#include <iostream>
#include <string>
#include "raylib.h"
#include "coins.h"

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
	Coins* coin_obj;

	void initTextures();
	void initVariables();

	bool checkCollision();

	int score;

	Vector2 playerPos, playerSpeed;

	void unload();
};