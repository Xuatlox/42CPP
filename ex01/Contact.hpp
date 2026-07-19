#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	public:
	 void	set_first_name(std::string value);
	 void	set_last_name(std::string value);
	 void	set_nickname(std::string value);
	 void	set_phone_number(std::string value);
	 void	set_darkest_secret(std::string value);

	private:
	 std::string	_first_name;
	 std::string	_last_name;
	 std::string	_nickname;
	 std::string	_phone_number;
	 std::string	_darkest_secret;
};

#endif