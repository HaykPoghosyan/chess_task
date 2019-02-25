#include "stdafx.h"
#include "Knight.h"
#include <iostream>


Knight::Knight()
{
}
Knight::Knight(int x, int y, char color) : Figure(x, y, color) {
}

void Knight::figure_hit(Board * board) {

	if (get_x() + 1 < 8 && get_y() + 2 < 8) {
		board->arr[get_x() + 1][get_y() + 2].can_hite(this->get_color());
	}
	if (get_x() + 1 < 8 && get_y() - 2 >= 0) {
		board->arr[get_x() + 1][get_y() - 2].can_hite(this->get_color());
	}
	if (get_x() - 1 >= 0 && get_y() - 2 >= 0) {
		board->arr[get_x() - 1][get_y() - 2].can_hite(this->get_color());
	}
	if (get_x() - 1 >= 0 && get_y() + 2 < 8) {
		board->arr[get_x() - 1][get_y() + 2].can_hite(this->get_color());
	}
	if (get_x() + 2 < 8 && get_y() + 1 < 8) {
		board->arr[get_x() + 2][get_y() + 1].can_hite(this->get_color());
	}
	if (get_x() + 2 < 8 && get_y() - 1 >= 0) {
		board->arr[get_x() + 2][get_y() - 1].can_hite(this->get_color());
	}
	if (get_x() - 2 >= 0 && get_y() + 1 < 8) {
		board->arr[get_x() - 2][get_y() + 1].can_hite(this->get_color());
	}
	if (get_x() - 2 >= 0 && get_y() - 1 >= 0) {
		board->arr[get_x() - 2][get_y() - 1].can_hite(this->get_color());
	}

};
Knight::~Knight()
{

}
