#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	DiamondTrap(DiamondTrap const &other);
	DiamondTrap(std::string const &name);
	DiamondTrap &operator=(DiamondTrap const &other);
	~DiamondTrap();

	void whoAmI();

private:
	std::string name;
};

#endif
