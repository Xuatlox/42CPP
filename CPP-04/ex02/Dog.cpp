#include "Dog.h"
#include <iostream>

Dog::Dog() : _brain(new Brain)
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->type = other.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "'Bark bark bark'" << std::endl;
}
