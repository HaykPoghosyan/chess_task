#pragma once

#include "Field.h"

class Board
{
public:
	Board();

	Field arr[8][8];

	void get_figure(int x, int y);


	void print_have_figure_desk();
	void print_can_hite_white();
	void print_can_hite_black();
	bool check (int x, int y);

	~Board();
};

