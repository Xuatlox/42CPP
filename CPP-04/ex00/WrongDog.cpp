#include "WrongDog.h"
#include <iostream>

WrongDog::WrongDog()
{
	std::cout << "WrongDog constructor called" << std::endl;
	this->type = "WrongDog";
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& other) : WrongAnimal(other)
{
	this->type = other.type;
	std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void WrongDog::makeSound() const
{
	std::cout << "'Bark bark bark'" << std::endl;
}
