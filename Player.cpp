#include "Player.h"

Player::Player()
{
	this->money = 10000;
	
}

Player::~Player()
{
}

float Player::GetPosX() const
{
	return position[0];
}

float Player::GetPosY() const
{
	return position[1];
}

void Player::setPosX(float x)
{
	this->position[0] = x;
}

void Player::setPosY(float y)
{
	this->position[1] = y;
}
