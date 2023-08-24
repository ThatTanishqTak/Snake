#include "coins.h"

Coins::Coins()
{
	initTextures();
	initVariables();
}

Coins::~Coins()
{
	unload();
}

void Coins::update()
{

}

void Coins::render()
{
	DrawCircle(100, 200, 10.0f, BLUE);
}

void Coins::initVariables()
{

}

void Coins::initTextures()
{

}

void Coins::unload()
{

}