#include <iostream>
#include <iomanip>
#include <string>

#include "PhoneBook.hpp"

std::string	get_contact_info(const std::string &info) {
	std::string	value;

	system("clear");
	while (true) {
		std::cout << "Enter " << info << ": ";
		std::getline(std::cin, value);
		system("clear");
		if (!value.empty())
			break ;
		std::cout <<  "This field can't be empty" << std::endl;
	}
	return value;
}

void	execute_add(PhoneBook *phonebook) {
	Contact		new_contact;

	new_contact.setFirstName(get_contact_info("First Name"));
	new_contact.setLastName(get_contact_info("Last Name"));
	new_contact.setNickname(get_contact_info("Nickname"));
	new_contact.setPhoneNumber(get_contact_info("Phone Number"));
	new_contact.setDarkestSecret(get_contact_info("Darkest Secret"));
	phonebook->addContact(new_contact);
}

int	get_contact_index(const PhoneBook &phonebook) {
	const int	nb_contacts = phonebook.getNbContacts();
	int			contact_index;

	if (nb_contacts == 0) {
		std::cout << "No contact found, try using ADD first" << std::endl << std::endl;
		return 0;
	}
	while (true) {
		system("clear");
		int			i = 0;
		std::cout << std::setw(10) << "Index";
		std::cout << "|" << std::setw(10) << "First Name";
		std::cout << "|" << std::setw(10) << "Last Name";
		std::cout << "|" << std::setw(10) << "Nickname" << std::endl;
		while (i < nb_contacts) {
			Contact current_contact = phonebook.getContact(i);
			std::cout << std::setw(10) << i + 1;
			std::cout << "|" << std::setw(10) << current_contact.getFirstName();
			std::cout << "|" << std::setw(10) << current_contact.getLastName();
			std::cout << "|" << std::setw(10) << current_contact.getNickname() << std::endl;
			++i;
		}
		std::cout << "Choose a contact index: ";
		if (std::cin >> contact_index && contact_index > 0 && contact_index <= nb_contacts)
			return (contact_index);
		std::cout << "Please enter a valid index" << std::endl;
	}
}

void	execute_search(const PhoneBook &phonebook) {
	system("clear");
	const int		contact_index = get_contact_index(phonebook) - 1;
	if (contact_index < 0)
		return ;
	const Contact	searched_contact = phonebook.getContact(contact_index);
	system("clear");
	std::cout << "First Name: " << searched_contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << searched_contact.getLastName() << std::endl;
	std::cout << "Nickname: " << searched_contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << searched_contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << searched_contact.getDarkestSecret() << std::endl << std::endl;
}

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
			execute_add(&phonebook);
		else if (user_input == "SEARCH")
			execute_search(phonebook);
		else
			system("clear");
	}
	return 0;
}
