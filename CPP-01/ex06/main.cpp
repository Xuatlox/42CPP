#include <iostream>
#include "Harl.hpp"

int main(int ac, char** av) {
	if (ac != 2) {
		std::cout << "Invalid arguments: ./harlFilter filterLevel" << std::endl;
		return 0;
	}
	Harl	harl;
	int		i = 0;
	std::string filterLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && filterLevel[i] != av[1])
		++i;
	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	switch (i) {
		case 0:
			harl.complain("debug");
			/* fall through */
		case 1:
			harl.complain("info");
			/* fall through */
		case 2:
			harl.complain("warning");
			/* fall through */
		case 3:
			harl.complain("error");
			break;
	}
	return 0;
}
