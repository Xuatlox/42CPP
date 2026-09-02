#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &other);
		Ice &operator=(Ice const &other);
		~Ice() override;

		void use(ICharacter &target) override;
		AMateria *clone() const override;
};

#endif