#include "stdafx.h"
#include "King.h"
#include <iostream>


King::King()
{
}

King::King(int x, int y, char color) : Figure(x, y, color) {
}

void King::figure_hit(Board * board) {

	int i = get_x();
	int j = get_y();
	if (i < 7 && j < 7) {
		++i;
		++j;
		board->arr[i][j].can_hite(this->get_color());
	}
	i = get_x();
	j = get_y();

	if (i > 0 && j > 0) {
		--i;
		--j;
		board->arr[i][j].can_hite(this->get_color());
	}
	i = get_x();
	j = get_y();

	if (i < 7 && j > 0) {
		++i;
		--j;
		board->arr[i][j].can_hite(this->get_color());
	}
	i = get_x();
	j = get_y();

	if (i > 0 && j < 7) {
		--i;
		++j;
		board->arr[i][j].can_hite(this->get_color());
	}
	i = get_x();
	j = get_y();

	if (i < 7)
	{
		++i;
		board->arr[i][j].can_hite(this->get_color());
	}
	i = get_x();

	if (i > 0)
	{
		--i;
		board->arr[i][j].can_hite(this->get_color());
	}
	i = get_x();

	if (j < 7)
	{
		++j;
		board->arr[i][j].can_hite(this->get_color());
	}
	j = get_y();

	if (j > 0)
	{
		--j;
		board->arr[i][j].can_hite(this->get_color());
	}
	j = get_y();
}

King::~King()
{
}
