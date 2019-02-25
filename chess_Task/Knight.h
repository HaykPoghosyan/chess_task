#pragma once
#include "Figure.h"
class Knight : public Figure
{
public:

	Knight();

	Knight(int x, int y, char color);

	using Figure::Figure;

	void figure_hit(Board * board);

	~Knight();
};

