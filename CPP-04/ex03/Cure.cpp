#include "Cure.hpp"
#include <iostream>

Cure::Cure() {
	std::cout << "Cure default constructor called" << std::endl;
	_type = "cure";
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(Cure const &other) {
	std::cout << "Cure copy constructor called" << std::endl;
	_type = other._type;
}

Cure &Cure::operator=(Cure const &other) {
	std::cout << "Cure assignment operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

AMateria *Cure::clone() const {
	std::cout << "Cure clone called" << std::endl;
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
