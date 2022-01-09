#pragma
#include <iostream>
#include <vector>
#include "Card.h"

class Deck
{
public:
	Deck();
	~Deck();
	void fill_deck();
	void randomise_cards();
	Card giveCard();
private:
	std::vector<Card*> deck;
};