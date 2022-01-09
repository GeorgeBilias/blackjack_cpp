#pragma once

#include "Deck.h"
#include "Player_deck.h"

class Player
{
protected:
	Deck player_deck;
	Player_deck pd_deck;
	bool CardState;
	int score;
public:
	Player(Deck p_deck);
	~Player();
	float GetPosX() const;
	float GetPosY() const;
	void setPosX(float x);
	void setPosY(float y);
	int getScore() const;
private:
	float position[2];
	int money;
};