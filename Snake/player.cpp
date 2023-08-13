#include "player.h"

Player::Player()
{
	initTextures();
	initVariables();
}

Player::~Player()
{
	unload();
}

void Player::update()
{
	if (IsKeyDown(KEY_W))
		playerPos.y -= playerSpeed.y * GetFrameTime();
	if (IsKeyDown(KEY_S))
		playerPos.y += playerSpeed.y * GetFrameTime();
	if (IsKeyDown(KEY_A))
		playerPos.x -= playerSpeed.x * GetFrameTime();
	if (IsKeyDown(KEY_D))
		playerPos.x += playerSpeed.x * GetFrameTime();
}

void Player::render()
{
	DrawRectangle(player.x, player.y,  player.width, player.height, GREEN);
}

void Player::initTextures()
{
	player = { playerPos.x, playerPos.y, 30.0f, 30.0f };
}

void Player::initVariables()
{
	playerPos = { 540.0f, 360.0f };
	playerSpeed = { 100.0f, 100.0f };
}

void Player::unload()
{

}