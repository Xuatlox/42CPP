#include <iostream>
#include <iomanip>
#include <string>

#include "PhoneBook.hpp"

void	get_user_input(std::string *user_input) {
	std::cout << "Available commands:" << std::endl;
	std::cout << "	- ADD: add a new contact" << std::endl;
	std::cout << "	- SEARCH: display a specific contact" << std::endl;
	std::cout << "	- EXIT: exit the program" << std::endl << std::endl;
	std::cout << "phonebook>";
	std::cin >> *user_input;
}

int	main() {
	PhoneBook phonebook;
	std::string	user_input;

	while (user_input != "EXIT") {
		get_user_input(&user_input);
		if (user_input == "ADD")
			phonebook.add();
		else if (user_input == "SEARCH")
			phonebook.search();
		else
			system("clear");
	}
	return 0;
}
