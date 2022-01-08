#include "Card.h"
#include "config.h"

Card::Card(int style, int num)
{	
	this->style = style;
	this->num = num;
	this->value = setValue();
	this->given = false;
}

Card::~Card()
{
}

int Card::getNum() const
{
	return num;
}

int Card::getStyle() const
{
	return style;
}

void Card::draw()
{
		if (this->style == 1) // Diamonds
		{
			switch (this->num)
			{
			case 1:
				br.texture = std::string(ASSET_PATH) + "ace_of_diamonds.png";
				break;
			case 2:
				br.texture = std::string(ASSET_PATH) + "2_of_diamonds.png";
				break;
			case 3:
				br.texture = std::string(ASSET_PATH) + "3_of_diamonds.png";
				break;
			case 4:
				br.texture = std::string(ASSET_PATH) + "4_of_diamonds.png";
				break;
			case 5:
				br.texture = std::string(ASSET_PATH) + "5_of_diamonds.png";
				break;
			case 6:
				br.texture = std::string(ASSET_PATH) + "6_of_diamonds.png";
				break;
			case 7:
				br.texture = std::string(ASSET_PATH) + "7_of_diamonds.png";
				break;
			case 8:
				br.texture = std::string(ASSET_PATH) + "8_of_diamonds.png";
				break;
			case 9:
				br.texture = std::string(ASSET_PATH) + "9_of_diamonds.png";
				break;
			case 10:
				br.texture = std::string(ASSET_PATH) + "10_of_diamonds.png";
				break;
			case 11:
				br.texture = std::string(ASSET_PATH) + "king_of_diamonds2.png";
				break;
			case 12:
				br.texture = std::string(ASSET_PATH) + "queen_of_diamonds2.png";
				break;
			case 13:
				br.texture = std::string(ASSET_PATH) + "jack_of_diamonds2.png";
				break;

			}
		
		}else if(this->style == 2) // Clubs
		{
			switch (this->num)
			{
			case 1:
				br.texture = std::string(ASSET_PATH) + "ace_of_clubs.png";
				break;
			case 2:
				br.texture = std::string(ASSET_PATH) + "2_of_clubs.png";
				break;
			case 3:
				br.texture = std::string(ASSET_PATH) + "3_of_clubs.png";
				break;
			case 4:
				br.texture = std::string(ASSET_PATH) + "4_of_clubs.png";
				break;
			case 5:
				br.texture = std::string(ASSET_PATH) + "5_of_clubs.png";
				break;
			case 6:
				br.texture = std::string(ASSET_PATH) + "6_of_clubs.png";
				break;
			case 7:
				br.texture = std::string(ASSET_PATH) + "7_of_clubs.png";
				break;
			case 8:
				br.texture = std::string(ASSET_PATH) + "8_of_clubs.png";
				break;
			case 9:
				br.texture = std::string(ASSET_PATH) + "9_of_clubs.png";
				break;
			case 10:
				br.texture = std::string(ASSET_PATH) + "10_of_clubs.png";
				break;
			case 11:
				br.texture = std::string(ASSET_PATH) + "king_of_clubs2.png";
				break;
			case 12:
				br.texture = std::string(ASSET_PATH) + "queen_of_clubs2.png";
				break;
			case 13:
				br.texture = std::string(ASSET_PATH) + "jack_of_clubs2.png";
				break;

			}
		}
		else if (this->style == 3) // Spades
		{
			switch (this->num)
			{
			case 1:
				br.texture = std::string(ASSET_PATH) + "ace_of_spades2.png";
				break;
			case 2:
				br.texture = std::string(ASSET_PATH) + "2_of_spades.png";
				break;
			case 3:
				br.texture = std::string(ASSET_PATH) + "3_of_spades.png";
				break;
			case 4:
				br.texture = std::string(ASSET_PATH) + "4_of_spades.png";
				break;
			case 5:
				br.texture = std::string(ASSET_PATH) + "5_of_spades.png";
				break;
			case 6:
				br.texture = std::string(ASSET_PATH) + "6_of_spades.png";
				break;
			case 7:
				br.texture = std::string(ASSET_PATH) + "7_of_spades.png";
				break;
			case 8:
				br.texture = std::string(ASSET_PATH) + "8_of_spades.png";
				break;
			case 9:
				br.texture = std::string(ASSET_PATH) + "9_of_spades.png";
				break;
			case 10:
				br.texture = std::string(ASSET_PATH) + "10_of_spades.png";
				break;
			case 11:
				br.texture = std::string(ASSET_PATH) + "king_of_spades2.png";
				break;
			case 12:
				br.texture = std::string(ASSET_PATH) + "queen_of_spades2.png";
				break;
			case 13:
				br.texture = std::string(ASSET_PATH) + "jack_of_spades2.png";
				break;

			}
		}
		else // Hearts
		{
			switch (this->num)
			{
			case 1:
				br.texture = std::string(ASSET_PATH) + "ace_of_hearts.png";
				break;
			case 2:
				br.texture = std::string(ASSET_PATH) + "2_of_hearts.png";
				break;
			case 3:
				br.texture = std::string(ASSET_PATH) + "3_of_hearts.png";
				break;
			case 4:
				br.texture = std::string(ASSET_PATH) + "4_of_hearts.png";
				break;
			case 5:
				br.texture = std::string(ASSET_PATH) + "5_of_hearts.png";
				break;
			case 6:
				br.texture = std::string(ASSET_PATH) + "6_of_hearts.png";
				break;
			case 7:
				br.texture = std::string(ASSET_PATH) + "7_of_hearts.png";
				break;
			case 8:
				br.texture = std::string(ASSET_PATH) + "8_of_hearts.png";
				break;
			case 9:
				br.texture = std::string(ASSET_PATH) + "9_of_hearts.png";
				break;
			case 10:
				br.texture = std::string(ASSET_PATH) + "10_of_hearts.png";
				break;
			case 11:
				br.texture = std::string(ASSET_PATH) + "king_of_hearts2.png";
				break;
			case 12:
				br.texture = std::string(ASSET_PATH) + "queen_of_hearts2.png";
				break;
			case 13:
				br.texture = std::string(ASSET_PATH) + "jack_of_hearts2.png";
				break;

			}

		}
		graphics::drawRect(CARD1_X,CARD1_Y,CARD1_WIDTH,CARD1_HEIGHT, br);
}

bool Card::getGiven() const
{
	return given;
}

void Card::itsGiven()
{
	given = true;
}


int Card::getValue() const
{
	return value;
}

int Card::setValue()
{
	if (num == 1)
	{
		return 11;
	}
	else if (num == 11 || num == 12 || num == 13)
	{
		return 10;
	}
	else {
		return num;
	}
}


