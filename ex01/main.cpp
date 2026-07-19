#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "PhoneBook.hpp"

void	get_user_input(std::string *user_input) {
	std::cout << "Available commands:" << std::endl;
	std::cout << "	- ADD: add a new contact" << std::endl;
	std::cout << "	- SEARCH: display a specific contact" << std::endl;
	std::cout << "	- EXIT: exit the program" << std::endl << std::endl;
	std::cout << "phonebook>";
	std::getline(std::cin, *user_input);
}

static std::string	get_contact_info(std::string info) {
	std::string	value;

	system("clear");
	while (true) {
		std::cout << "Enter " << info << ":";
		std::getline(std::cin, value);
		system("clear");
		if (!value.empty())
			break ;
		std::cout <<  "This field can't be empty" << std::endl;
	}
	return value;
}

void	execute_add(PhoneBook phonebook) {
	Contact		new_contact;

	new_contact.set_first_name(get_contact_info("First Name"));
	new_contact.set_last_name(get_contact_info("Last Name"));
	new_contact.set_nickname(get_contact_info("Nickname"));
	new_contact.set_phone_number(get_contact_info("Phone Number"));
	new_contact.set_darkest_secret(get_contact_info("Darkest Secret"));
	phonebook.add_contact(new_contact);
}

void	execute_search(PhoneBook phonebook) {
	int	nb_contacts = phonebook.get_nb_contacts();
	int	i = 0;

	if (nb_contacts == 0) {
		std::cout << "No contact found" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname" << std::endl;
	while (++i <= nb_contacts) {
		std::cout << std::setw(10) << ;
	}
	std::cin.ignore();
}

int	main(void) {
	PhoneBook	phonebook;
	std::string	user_input;

	while (user_input != "EXIT") {
		get_user_input(&user_input);
		if (user_input == "ADD")
			execute_add(phonebook);
		else if (user_input == "SEARCH")
			execute_search(phonebook);
		system("clear");
	}
	return 0;
}
