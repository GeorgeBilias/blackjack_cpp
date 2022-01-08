#pragma once
#include <graphics.h>

class Card
{
public:
	Card(int style, int num);
	virtual ~Card();
	int getNum()const;
	int getStyle() const;
	int getValue() const;
	int setValue();
	void draw();
	bool getGiven() const;
	void itsGiven();
private:
	int num;
	int style;
	int value;
	bool given;
	graphics::Brush br;
};