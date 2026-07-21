#include "Contact.hpp"

void	Contact::set_first_name(const std::string &value) {
	this->_first_name = value;
}

void	Contact::set_last_name(const std::string &value) {
	this->_last_name = value;
}

void	Contact::set_nickname(const std::string &value) {
	this->_nickname = value;
}

void	Contact::set_phone_number(const std::string &value) {
	this->_phone_number = value;
}

void	Contact::set_darkest_secret(const std::string &value) {
	this->_darkest_secret = value;
}

std::string	Contact::get_first_name() const {
	return this->_first_name;
}

std::string	Contact::get_last_name() const {
	return this->_last_name;
}
std::string	Contact::get_nickname() const {
	return this->_nickname;
}

std::string	Contact::get_phone_number() const {
	return this->_phone_number;
}

std::string	Contact::get_darkest_secret() const {
	return this->_darkest_secret;
}
