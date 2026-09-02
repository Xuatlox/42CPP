#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();

		virtual void	makeSound() const = 0;
		std::string		getType() const;
	protected:
		std::string	type;
};

#endif
