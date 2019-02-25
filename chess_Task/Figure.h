#pragma once
#include "Board.h"

class Figure
{
	private:
		int x;
		int y;
		char color;

	public:
		Figure();
		Figure(int x, int y, char color);
		int get_x();
		int get_y();
		char get_color();
		virtual void figure_hit(Board * board) = 0;

		~Figure();
};

