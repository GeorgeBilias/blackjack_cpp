#include "Deck.h"
#include "Card.h";

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
			Card new_card(i, j);
		}
	}
}

void Deck::remove_from_deck()
{
}

int Deck::get_from_deck() const
{

}
