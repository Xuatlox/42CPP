#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _contactsAdded(0) {}

void	PhoneBook::_addContact(const Contact &new_contact) {
	this->_contacts[this->_contactsAdded % 8] = new_contact;
	++this->_contactsAdded;
}

int		PhoneBook::_getNbContacts() const {
	if (this->_contactsAdded < 8)
		return this->_contactsAdded;
	return 8;
}

Contact	PhoneBook::_getContact(const int index) const {
	return this->_contacts[index];
}

void PhoneBook::search() const
{
	system("clear");
	const int		contact_index = this->_getContactIndex() - 1;
	if (contact_index < 0)
		return ;
	const Contact	searched_contact = this->_getContact(contact_index);
	system("clear");
	std::cout << "First Name: " << searched_contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << searched_contact.getLastName() << std::endl;
	std::cout << "Nickname: " << searched_contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << searched_contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << searched_contact.getDarkestSecret() << std::endl << std::endl;
}

void PhoneBook::add()
{
	Contact		new_contact;

	new_contact.setFirstName(_getContactInfo("First Name"));
	new_contact.setLastName(_getContactInfo("Last Name"));
	new_contact.setNickname(_getContactInfo("Nickname"));
	new_contact.setPhoneNumber(_getContactInfo("Phone Number"));
	new_contact.setDarkestSecret(_getContactInfo("Darkest Secret"));
	this->_addContact(new_contact);
}

std::string PhoneBook::_getContactInfo(const std::string& info)
{
	std::string		value;

	system("clear");
	while (true) {
		std::cout << "Enter " << info << ": ";
		std::getline(std::cin, value);
		system("clear");
		if (!std::cin.good()) {
			std::cout << "Standard input closed, goodbye :D" << std::endl;
			exit(0);
		}
		if (!value.empty())
			break ;
		std::cout <<  "This field can't be empty" << std::endl;
	}
	return value;
}

int PhoneBook::_getContactIndex() const
{
	const int	nb_contacts = this->_getNbContacts();
	int			contact_index;

	if (nb_contacts == 0) {
		std::cout << "No contact found, try using ADD first" << std::endl << std::endl;
		return 0;
	}
	while (true) {
		system("clear");
		int			i = 0;
		std::cout << "|" << std::setw(10) << "Index";
		std::cout << "|" << std::setw(10) << "First Name";
		std::cout << "|" << std::setw(10) << "Last Name";
		std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
		while (i < nb_contacts) {
			Contact current_contact = this->_getContact(i);
			std::cout << "|" << std::setw(10) << i + 1;
			std::string	info = current_contact.getFirstName();
			if (info.length() > 9)
				info = info.substr(0, 9) + ".";
			std::cout << "|" << std::setw(10) << info;
			info = current_contact.getLastName();
			if (info.length() > 9)
				info = info.substr(0, 9) + ".";
			std::cout << "|" << std::setw(10) << info;
			info = current_contact.getNickname();
			if (info.length() > 9)
				info = info.substr(0, 9) + ".";
			std::cout << "|" << std::setw(10) << info << "|" << std::endl;
			++i;
		}
		std::cout << "Choose a contact index: ";
		std::cin >> contact_index;
		if (!std::cin.good()) {
			std::cout << "Standard input closed, goodbye :D" << std::endl;
			exit(0);
		}
		if (contact_index > 0 && contact_index <= nb_contacts)
			return (contact_index);
		std::cout << "Please enter a valid index" << std::endl;
	}
}
