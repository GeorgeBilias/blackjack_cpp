#include "Player.h"

Player::Player(Deck p_deck)
{
	this->money = 10000;
	CardState = true;
	this->player_deck = p_deck;
	this->pd_deck.first_cards(p_deck.giveCard(), p_deck.giveCard());
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

int Player::getScore() const
{
	return score;
}