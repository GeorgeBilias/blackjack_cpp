#include "Player_deck.h"

void Player_deck::first_cards(Card c1, Card c2)
{
	player_deck.push_back(c1);
	player_deck.push_back(c2);
}

void Player_deck::showCards()
{
}

void Player_deck::getCard(Card c)
{
}

int Player_deck::getNumberofCards()
{
	return player_deck.size();
}

int Player_deck::getValueofCards()
{
	int sum = 0;
	for (std::vector<Card>::iterator i = player_deck.begin(); i != player_deck.end(); i++)
	{
		sum += i->getValue();
	}
	return sum;
}
