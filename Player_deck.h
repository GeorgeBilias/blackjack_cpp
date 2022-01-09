#pragma once
#include "Card.h"

class Player_deck
{
public:
	void first_cards(Card c1, Card c2);
	void showCards();
	void getCard(Card c);
	int getNumberofCards();
	int getValueofCards();
private:
	std::vector<Card> player_deck;
};