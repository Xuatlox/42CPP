#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _contacts_added(0), _MAX_CONTACT_NB(8) {}

void	PhoneBook::add_contact(const Contact &new_contact) {
	this->_contacts[this->_contacts_added % 8] = new_contact;
	++this->_contacts_added;
}

int		PhoneBook::get_nb_contacts() const {
	if (this->_contacts_added < this->_MAX_CONTACT_NB)
		return this->_contacts_added;
	return this->_MAX_CONTACT_NB;
}

Contact	PhoneBook::get_contact(const int index) const {
	return this->_contacts[index];
}
