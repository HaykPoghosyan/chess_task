#pragma once
class Field
{
public:
	Field();
	bool can_hit_white = false;
	bool can_hite_black = false;
	bool have_figure = false;
	void can_hite(char color);
	~Field();
};

