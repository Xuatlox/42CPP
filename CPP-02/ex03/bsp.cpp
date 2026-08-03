#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	const Fixed	two(2);
	Fixed	totalArea = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY())) / two;
	Fixed	firstArea = (a.getX() * (b.getY() - point.getY()) + b.getX() * (point.getY() - a.getY())
		+ point.getX() * (a.getY() - b.getY())) / two;
	Fixed	secondArea = (a.getX() * (point.getY() - c.getY()) + point.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - point.getY())) / two;
	Fixed	thirdArea = (point.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - point.getY())
		+ c.getX() * (point.getY() - b.getY())) / two;
	const Fixed	minusOne(-1);
	if (totalArea < 0)
		totalArea = totalArea * minusOne;
	if (firstArea < 0)
		firstArea = firstArea * minusOne;
	if (secondArea < 0)
		secondArea = secondArea * minusOne;
	if (thirdArea < 0)
		thirdArea = thirdArea * minusOne;
	return totalArea == firstArea + secondArea + thirdArea;
}
