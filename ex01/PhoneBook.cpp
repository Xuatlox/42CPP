#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : contacts_added(0), MAX_CONTACT_NB(8);

void	PhoneBook::add_contact(Contact new_contact) {
	this->contacts[this->contacts_added % 8] = new_contact;
	++this->contacts_added;
}

int		PhoneBook::get_nb_contacts(void) {
	if (this->contacts_added < this->MAX_CONTACT_NB)
		return this->contacts_added;
	return this->MAX_CONTACT_NB;
}

