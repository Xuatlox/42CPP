#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	public:
	 PhoneBook();
	 void		add_contact(const Contact &new_contact);
	 int		get_nb_contacts() const;
	 Contact	get_contact(int index) const;

	private:
	 Contact	_contacts[8];
	 int		_contacts_added;
	 const int	_MAX_CONTACT_NB;
};

#endif
