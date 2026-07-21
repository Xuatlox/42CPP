#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	public:
	 PhoneBook();
	 void		addContact(const Contact &new_contact);
	 int		getNbContacts() const;
	 Contact	getContact(int index) const;

	private:
	 Contact			_contacts[8];
	 int				_contactsAdded;
};

#endif
