#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	public:
	 PhoneBook();

	 void	search() const;
	 void	add();

	private:
	 Contact			_contacts[8];
	 int				_contactsAdded;

	 void				_addContact(const Contact &new_contact);
	 int				_getNbContacts() const;
	 Contact			_getContact(int index) const;
	 static std::string	_getContactInfo(const std::string &info);
	 int				_getContactIndex() const;
};

#endif
