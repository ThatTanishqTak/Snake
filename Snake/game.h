#pragma once

#include "raylib.h"
#include "player.h"

class Player;

class Game
{
public:
	Game();
	~Game();

	int windowWidth, windowHeight;

	void run();

private:
	Player* play_obj;

	void initTextures();
	void initVariables();
	void initScreen();

	void update();
	void render();

	void unload();
};