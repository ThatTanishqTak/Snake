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
	DrawCircleV(circleCenter, radius, BLUE);
}

void Coins::initVariables()
{
	radius = 10.0f;
	circleCenter = { 100.0f, 200.0f };
}

void Coins::initTextures()
{

}

void Coins::unload()
{

}