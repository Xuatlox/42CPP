#include "Animal.h"
#include <iostream>

Animal::Animal() : type("No type")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "No associated sound for the base class" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
