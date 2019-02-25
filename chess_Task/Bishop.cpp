#include "stdafx.h"
#include "Bishop.h"
#include <iostream>


Bishop::Bishop()
{
}

Bishop::Bishop(int x, int y, char color) : Figure(x, y, color) {
}

void Bishop::figure_hit(Board * board){

	int i = get_x();
	int j = get_y();
	while (i < 7 && j < 7) {
		++i;
		++j;
		board->arr[i][j].can_hite(this->get_color());
		if (board->arr[i][j].have_figure) {
			break;
		}
	}
	i = get_x();
	j = get_y();

	while (i > 0 && j > 0) {
		--i;
		--j;
		board->arr[i][j].can_hite(this->get_color());
		if (board->arr[i][j].have_figure) {
			break;
		}
	}
	i = get_x();
	j = get_y();

	while (i < 7 && j > 0) {
		++i;
		--j;
		board->arr[i][j].can_hite(get_color());
		if (board->arr[i][j].have_figure) {
			break;
		}
	}
	i = get_x();
	j = get_y();

	while (i > 0 && j < 7) {
		--i;
		++j;
		board->arr[i][j].can_hite(get_color());
		if (board->arr[i][j].have_figure) {
			break;
		}
	}
};

Bishop::~Bishop()
{
}
