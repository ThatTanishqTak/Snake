#include "player.h"

Player::Player()
{
	initTextures();
	initVariables();

	coin_ply_obj = new Coins();
}

Player::~Player()
{
	unload();
}

void Player::update()
{
	if(isAlive)
	{
		if (IsKeyDown(KEY_W)) { playerPos.y -= playerSpeed.y * GetFrameTime(); }
		if (IsKeyDown(KEY_S)) { playerPos.y += playerSpeed.y * GetFrameTime(); }
		if (IsKeyDown(KEY_A)) { playerPos.x -= playerSpeed.x * GetFrameTime(); }			
		if (IsKeyDown(KEY_D)) { playerPos.x += playerSpeed.x * GetFrameTime(); }		
	}

	if (playerPos.x <= 0) { isAlive = false; }
	if (playerPos.y <= 0) { isAlive = false; }
	if (playerPos.x + player.width >= 1080) { isAlive = false; }
	if (playerPos.y + player.height >= 720) { isAlive = false; }

	collision = CheckCollisionCircleRec(coin_ply_obj->circleCenter, coin_ply_obj->radius, player);

	if (collision)
	{
		player.width += 30.0f;
	}
}

void Player::render()
{
	DrawRectangle(static_cast<int>(playerPos.x), static_cast<int>(playerPos.y), 
				  static_cast<int>(player.width), static_cast<int>(player.height), GREEN);

	if (!isAlive) { DrawText("GAME OVER!", 480, 360, 30, RED); }
}

void Player::initTextures()
{
	
}

void Player::initVariables()
{
	isAlive = true;

	playerPos = { 540.0f, 360.0f };
	playerSpeed = { 250.0f, 250.0f };
	player = { playerPos.x, playerPos.y, 30.0f, 30.0f };
}

void Player::unload()
{
	delete coin_ply_obj;
}