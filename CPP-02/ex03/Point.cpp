#include "Point.hpp"

Point::Point(void) : x( 0) , y( 0) {}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point	&Point::operator=(const Point &other) {
	if (this != &other)
		new (this) Point(other);
	return *this;
}

Point::~Point(void) {}

Fixed	Point::getX(void) const {
	return this->x;
}

Fixed	Point::getY(void) const {
	return this->y;
}
