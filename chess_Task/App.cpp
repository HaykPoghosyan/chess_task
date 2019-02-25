#include "stdafx.h"
#include <iostream>
#include "App.h"

App::App()
{
}

void App::start() {

	while (true)
	{


		Board *board = new Board();

		int king_x;

		int king_y;

		int x, y;

		{
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "enter White King Figure X - ";
			std::cin >> x;
			king_x = x;
			if (x > 7 || x < 0) {
				continue;
			}
			std::cout << std::endl;
			std::cout << "enter White King Figure Y - ";
			std::cin >> y;
			king_y = y;
			if (y > 7 || y < 0) {
				continue;
			}
			std::cout << std::endl;
		}

		board->arr[x][y].have_figure = true;
		King king_w(x, y, 'w');

		{
			std::cout << "enter White Queen Figure X - ";
			std::cin >> x;
			if (x > 7 || x < 0) {
				continue;
			}
			std::cout << std::endl;
			std::cout << "enter White Queen Figure Y - ";
			std::cin >> y;
			if (y > 7 || y < 0) {
				continue;
			}
			std::cout << std::endl;
		}

		if (board->arr[x][y].have_figure != true) {
			board->arr[x][y].have_figure = true;
		}
		else {
			std::cout << "In this Field has a figure";
			std::cin.get();
			continue;
		}
		Queen queen(x, y, 'w');

		{
			std::cout << "enter White Bishop Figure X - ";
			std::cin >> x;
			if (x > 7 || x < 0) {
				continue;
			}
			std::cout << std::endl;
			std::cout << "enter White Bishop Figure Y - ";
			std::cin >> y;
			if (y > 7 || y < 0) {
				continue;
			}
			std::cout << std::endl;
		}

		if (board->arr[x][y].have_figure != true) {
			board->arr[x][y].have_figure = true;
		}
		else {
			std::cout << "In this Field has a figure";
			std::cin.get();

			continue;
		}
		Bishop bishop(x, y, 'w');

		{
			std::cout << "enter White Knight Figure X - ";
			std::cin >> x;
			if (x > 7 || x < 0) {
				continue;
			}
			std::cout << std::endl;
			std::cout << "enter White Knight Figure Y - ";
			std::cin >> y;
			if (y > 7 || y < 0) {
				continue;
			}
			std::cout << std::endl;
		}

		if (board->arr[x][y].have_figure != true) {
			board->arr[x][y].have_figure = true;
		}
		else {
			std::cout << "In this Field has a figure";
			std::cin.get();

			continue;
		}
		Knight knight(x, y, 'w');

		{
			std::cout << "enter Black King Figure X - ";
			std::cin >> x;
			if (x > 7 || x < 0) {
				continue;
			}
			std::cout << std::endl;
			std::cout << "enter Black King Figure Y - ";
			std::cin >> y;
			if (y > 7 || y < 0) {
				continue;
			}
			std::cout << std::endl;
		}

		if (board->arr[x][y].have_figure != true) {
			board->arr[x][y].have_figure = true;
		}
		else {
			std::cout << "In this Field has a figure";
			std::cin.get();

			continue;
		}
		if (abs(king_x - x) < 2 || abs(king_y - y) < 2) {
			std::cout << std::endl;
			std::cout << "White and Black King can not to be so close ";
			continue;
		}

		King king_b(x, y, 'b');

		board->print_have_figure_desk();


		std::cout << std::endl;

		king_w.figure_hit(board);
		queen.figure_hit(board);
		bishop.figure_hit(board);
		knight.figure_hit(board);

		king_b.figure_hit(board);

		board->print_can_hite_white();

		std::cout << std::endl;

		std::cout << "";


		std::cout << std::endl;


		board->print_can_hite_black();

		std::cout << std::endl;

		if (board->check(x, y)) {
			std::cout << "Is a MATE ";
		}
		else {
			std::cout << "Is not a MATE ";
		}

	}

}

App::~App()
{
}
