#include <iostream>
#include "Point.hpp"

int main( void ) {
	const Point	a(0, 0);
	const Point	b(2, 2);
	const Point	c(0, 4);
	const Point	test(0, 1);

	std::cout << bsp(a, b, c, test) << std::endl << std::endl;

	const Point	test2(-1, 0);

	std::cout << bsp(a, b, c, test2) << std::endl << std::endl;

	const Point	test3(0, 0);

	std::cout << bsp(a, b, c, test3) << std::endl << std::endl;
}
