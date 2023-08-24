#include "game.h"

Game::Game()
{
	initTextures();
	initVariables();
	initScreen();

	coin_obj = new Coins();
	play_obj = new Player();
}

Game::~Game()
{
	unload();
}

void Game::run()
{
	while (!WindowShouldClose())
	{
		update();
		render();
	}
}

void Game::initTextures()
{

}

void Game::initVariables()
{
	windowWidth = 1080;
	windowHeight = 720;
}

void Game::initScreen()
{
	InitWindow(windowWidth, windowHeight, "Snake");
	SetTargetFPS(60);
}

void Game::update()
{
	coin_obj->update();
	play_obj->update();
}

void Game::render()
{
	BeginDrawing();
	ClearBackground(BLACK);

	coin_obj->render();
	play_obj->render();

	EndDrawing();
}

void Game::unload()
{
	delete coin_obj;
	delete play_obj;

	CloseWindow();
}