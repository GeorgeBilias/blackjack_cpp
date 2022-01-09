#include "Deck.h"
#include "Card.h"
#include <iostream> // std
#include <vector> // vector
#include <algorithm> // random shuffle

Deck::Deck()
{
}

Deck::~Deck()
{
}

void Deck::fill_deck()
{

	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 13; j++)
		{
			deck.push_back(new Card(i, j));
		}
	}
}

void Deck::randomise_cards()
{
	std::random_shuffle(deck.begin(), deck.end());
}

Card Deck::giveCard()
{
	for (int i = 0; i <= deck.size() - 1; i++)
	{
		if (!deck[i]->getGiven())
		{
			deck[i]->cardGiven();
			return (*deck[i]);
		}
	}
}

