#pragma once

#include "Deck.h"
#include "Player_deck.h"

class Player
{
protected:
	Deck player_deck; // the deck
	Player_deck pd_deck; // player's deck (his cards)
	bool CardState; // a boolean set for if the player can get more cards or not
	int score;
public:
	Player(Deck p_deck); // a player's constructor
	~Player(); // the destructor
	float GetPosX() const; // get player's position x (to be used for printing)
	float GetPosY() const; // get player's position y (to be used for printing)
	void setPosX(float x); // set player's position x (to be used for printing)
	void setPosY(float y); // set player's position y (to be used for printing)
	int getScore() const; // get player's score aka the value of his cards
private:
	float position[2];
};