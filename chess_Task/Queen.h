#pragma once
#include "Figure.h"

class Queen : public Figure
{
public:
	Queen();
		
	Queen(int x, int y, char color);

		using Figure::Figure;

		void figure_hit(Board* board);

	~Queen();
};

