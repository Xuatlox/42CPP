#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	public:
	 void			set_first_name(const std::string &value);
	 void			set_last_name(const std::string &value);
	 void			set_nickname(const std::string &value);
	 void			set_phone_number(const std::string &value);
	 void			set_darkest_secret(const std::string &value);
	 std::string	get_first_name() const;
	 std::string	get_last_name() const;
	 std::string	get_nickname() const;
	 std::string	get_phone_number() const;
	 std::string	get_darkest_secret() const;

	private:
	 std::string	_first_name;
	 std::string	_last_name;
	 std::string	_nickname;
	 std::string	_phone_number;
	 std::string	_darkest_secret;
};

#endif