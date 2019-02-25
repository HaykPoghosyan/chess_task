#include "stdafx.h"
#include "Field.h"


Field::Field()
{
}
void Field::can_hite(char color) {
	if (color == 'w') {
		this->can_hit_white = true;
	}
	else{
		this->can_hite_black = true;
	}
}
Field::~Field()
{
}
