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

	if (playerPos.x <= 0)
		playerPos.x = 0;
	if (playerPos.x + player.width >= 1080)
		playerPos.x = 1080 - player.width;
	if (playerPos.y <= 0)
		playerPos.y = 0;
	if (playerPos.y + player.height >= 720)
		playerPos.y = 720 - player.height;
}

void Player::render()
{
	DrawRectangle(static_cast<int>(playerPos.x), static_cast<int>(playerPos.y), 
				  static_cast<int>(player.width), static_cast<int>(player.height), GREEN);
}

void Player::initTextures()
{
	player = { playerPos.x, playerPos.y, 30.0f, 30.0f };
}

void Player::initVariables()
{
	playerPos = { 540.0f, 360.0f };
	playerSpeed = { 250.0f, 250.0f };
}

void Player::unload()
{

}