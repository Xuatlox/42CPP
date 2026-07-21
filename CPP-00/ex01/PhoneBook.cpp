#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _contactsAdded(0) {}

void	PhoneBook::addContact(const Contact &new_contact) {
	this->_contacts[this->_contactsAdded % 8] = new_contact;
	++this->_contactsAdded;
}

int		PhoneBook::getNbContacts() const {
	if (this->_contactsAdded < 8)
		return this->_contactsAdded;
	return 8;
}

Contact	PhoneBook::getContact(const int index) const {
	return this->_contacts[index];
}
