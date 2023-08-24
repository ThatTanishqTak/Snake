#pragma once

#include "raylib.h"
#include "player.h"
#include "coins.h"

class Player;
class Coins;

class Game
{
public:
	Game();
	~Game();

	int windowWidth, windowHeight;

	void run();

private:
	Player* play_obj;
	Coins* coin_obj;

	void initTextures();
	void initVariables();
	void initScreen();

	void update();
	void render();

	void unload();
};