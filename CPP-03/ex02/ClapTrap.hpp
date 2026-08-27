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

	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
	void setName(std::string &name);
	void setHitPoints(int value);
	void setEnergyPoints(int value);
	void setAttackDamage(int value);

private:
	std::string	name;
	int	hitPoints;
	int	energyPoints;
	int	attackDamage;
};

#endif
