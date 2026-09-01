#pragma once
#ifndef WRONGDOG_H
#define WRONGDOG_H

#include "WrongAnimal.h"

class WrongDog : public WrongAnimal
{
public:
	WrongDog();
	WrongDog(const WrongDog &other);
	WrongDog &operator=(const WrongDog &other);
	~WrongDog();

	void makeSound() const;
};

#endif
