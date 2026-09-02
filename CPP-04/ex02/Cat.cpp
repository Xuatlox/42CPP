#include "Cat.h"
#include <iostream>

Cat::Cat() : _brain(new Brain)
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	this->type = other.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "'Meow meow meow'" << std::endl;
}
