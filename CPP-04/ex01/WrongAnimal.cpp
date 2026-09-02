#include "WrongAnimal.h"
#include <iostream>

WrongAnimal::WrongAnimal() : type("No type")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "No associated sound for the base class" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
