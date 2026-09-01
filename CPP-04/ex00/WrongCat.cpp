#include "WrongCat.h"
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	this->type = other.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "'Meow meow meow'" << std::endl;
}
