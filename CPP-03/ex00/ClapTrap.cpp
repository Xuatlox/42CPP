#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string const &name) : name(name), hitPoints(10),
	energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) : name(other.name), hitPoints(other.hitPoints),
	energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other) {
	std::cout << "ClapTrap operator '=' constructor called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing ";
		std::cout << this->attackDamage << " points of damage" << std::endl;
		--this->energyPoints;
	}
	else if (this->hitPoints > 0)
		std::cout << "Claptrap " << this->name << " has no energy left to attack." << std::endl;
	else
		std::cout << "Claptrap " << this->name << " has no hit points left to attack." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		std::cout << "ClapTrap " << this->name << " gains " << amount << " hit points back" << std::endl;
		this->hitPoints += amount;
		--this->energyPoints;
		std::cout << "ClapTrap " << this->name << " has now " << this->hitPoints << " hit points left." << std::endl;
	}
	else if (this->hitPoints > 0)
		std::cout << "Claptrap " << this->name << " has no energy left to be repaired." << std::endl;
	else
		std::cout << "Claptrap " << this->name << " has no hit points left to be repaired." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " loses " << amount << " hit points." << std::endl;
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " has now " << this->hitPoints << " hit points left." << std::endl;
}
