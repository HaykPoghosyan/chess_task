#include "stdafx.h"
#include <iostream>
#include "Queen.h"

Queen::Queen()
{
}

	Queen::Queen(int x, int y, char color) : Figure(x, y, color) {
	}

	void Queen::figure_hit(Board * board) {

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
		i = get_x();
		j = get_y();

		while (i < 7)
		{
			++i;
			board->arr[i][j].can_hite(this->get_color());
			if (board->arr[i][j].have_figure) {
				break;
			}
		}
		i = get_x();

		while (i > 0)
		{
			--i;
			board->arr[i][j].can_hite(this->get_color());
			if (board->arr[i][j].have_figure) {
				break;
			}
		}
		i = get_x();

		while (j < 7)
		{
			++j;
			board->arr[i][j].can_hite(this->get_color());
			if (board->arr[i][j].have_figure) {
				break;
			}
		}
		j = get_y();

		while (j > 0)
		{
			--j;
			board->arr[i][j].can_hite(this->get_color());
			if (board->arr[i][j].have_figure) {
				break;
			}
		}
		j = get_y();
	};

Queen::~Queen()
{
}
