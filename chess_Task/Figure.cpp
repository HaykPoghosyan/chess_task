#include "stdafx.h"
#include "Figure.h"
#include <iostream>

Figure::Figure()
{
}

Figure::Figure(int x, int y, char color) : x(x), y(y), color(color) {
}

int Figure::get_x() {
	return this->x;
}

int Figure::get_y() {
	return this->y;
}

char Figure::get_color() {
	return this->color;
}


Figure::~Figure()
{
}
