#pragma once
#include "Figure.h"
class Bishop : public Figure
{
public:

	Bishop();

	Bishop(int x, int y, char color);

	using Figure::Figure;

	void figure_hit(Board * board);

	~Bishop();
};

