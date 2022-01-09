#pragma once
#include <graphics.h>

class Card
{
public:
	Card(int style, int num);
	Card(const Card&);
	~Card();
	int getNum()const;
	int getStyle() const;
	int getValue() const;
	bool getGiven() const;
	void cardGiven();
	void draw();
private:
	int num;
	int style;
	int value;
	bool given;
	int setValue();
	graphics::Brush br;
};