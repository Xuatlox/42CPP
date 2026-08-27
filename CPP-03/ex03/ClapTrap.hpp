#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &other);
	ClapTrap &operator=(ClapTrap const &other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string	name;
	int	hitPoints;
	int	energyPoints;
	int	attackDamage;
};

#endif
