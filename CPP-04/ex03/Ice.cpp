#include "Ice.hpp"
#include <iostream>

Ice::Ice() {
	std::cout << "Ice default constructor called" << std::endl;
	_type = "ice";
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(Ice const &other) {
	std::cout << "Ice copy constructor called" << std::endl;
	_type = other._type;
}

Ice &Ice::operator=(Ice const &other) {
	std::cout << "Ice assignment operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

AMateria *Ice::clone() const {
	std::cout << "Ice clone called" << std::endl;
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
