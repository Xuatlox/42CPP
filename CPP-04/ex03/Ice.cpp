#include "Ice.hpp"
#include <iostream>

Ice::Ice() {
	std::cout << "Ice default constructor called" << std::endl;
	type = "ice";
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(Ice const &other) {
	std::cout << "Ice copy constructor called" << std::endl;
	type = other.type;
}

Ice &Ice::operator=(Ice const &other) {
	std::cout << "Ice assignment operator called" << std::endl;
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
