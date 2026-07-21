#include "Contact.hpp"

void	Contact::setFirstName(const std::string &value) {
	this->_firstName = value;
}

void	Contact::setLastName(const std::string &value) {
	this->_lastName = value;
}

void	Contact::setNickname(const std::string &value) {
	this->_nickname = value;
}

void	Contact::setPhoneNumber(const std::string &value) {
	this->_phoneNumber = value;
}

void	Contact::setDarkestSecret(const std::string &value) {
	this->_darkestSecret = value;
}

std::string	Contact::getFirstName() const {
	return this->_firstName;
}

std::string	Contact::getLastName() const {
	return this->_lastName;
}

std::string	Contact::getNickname() const {
	return this->_nickname;
}

std::string	Contact::getPhoneNumber() const {
	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret() const {
	return this->_darkestSecret;
}
