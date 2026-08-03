#include <iostream>
#include "Point.hpp"

int main( void ) {
	Point	a(0, 0);
	Point	b(2, 2);
	Point	c(0, 4);
	Point	test(1, 2);

	std::cout << bsp(a, b, c, test) << std::endl;
}
