#include "game.h"

Game::Game()
{
	initTextures();
	initVariables();
	initScreen();

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
	play_obj->update();
}

void Game::render()
{
	BeginDrawing();
	ClearBackground(BLACK);

	play_obj->render();

	EndDrawing();
}

void Game::unload()
{
	delete play_obj;

	CloseWindow();
}