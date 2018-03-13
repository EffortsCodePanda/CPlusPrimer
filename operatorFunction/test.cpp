#include "test.h"

cooAxis::cooAxis(int xx, int yy)
{
	this->x = xx;
	this->y = yy;
}

const cooAxis operator+(const cooAxis &a, const cooAxis &b)
{
	return cooAxis(a.x + b.x, a.y + b.y);
}

const cooAxis operator-(const cooAxis &a, const cooAxis &b)
{
	return cooAxis(a.x - b.x, a.y - b.y);
}


cooAxis operator+=(cooAxis &a, const cooAxis &b)
{
	a.x = a.x + b.x;
	a.y = a.y + b.y;
	return a;
}