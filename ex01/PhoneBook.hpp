#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	public:
	 PhoneBook(void);
	 void	add_contact(Contact new_contact);
	 int	get_nb_contacts(void);

	private:
	 Contact	contacts[8];
	 int		contacts_added;
	 const int	MAX_CONTACT_NB;
};

#endif