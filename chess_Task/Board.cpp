#include "stdafx.h"
#include "Board.h"
#include <iostream>

Board::Board()
{
}



void Board::get_figure(int x, int y) {
	arr[x][y].have_figure = true;
}

void Board::print_have_figure_desk() {
	for (int i = 7; i >= 0; i--) {
		for (int j = 0; j < 8; j++) {
			std::cout << this->arr[i][j].have_figure << ' ';
		}
		std::cout << std::endl;
	}
}

void Board::print_can_hite_white() {
	for (int i = 7; i >= 0; i--) {
		for (int j = 0; j < 8; j++) {
			std::cout << this->arr[i][j].can_hit_white << ' ';
		}
		std::cout << std::endl;
	}
}

void Board::print_can_hite_black() {
	for (int i = 7; i >= 0; i--) {
		for (int j = 0; j < 8; j++) {
			std::cout << this->arr[i][j].can_hite_black << ' ';
		}
		std::cout << std::endl;
	}
}

bool Board :: check(int x, int y) {

	if (this->arr[x][y].can_hit_white == false) {
		return false;
	}
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (this->arr[i][j].can_hite_black && !this->arr[i][j].can_hit_white)
			{
				return false;
			}
		}
	}
	return true;
}

Board::~Board()
{
}
