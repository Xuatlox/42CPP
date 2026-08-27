#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("Bob_clap_name"), FragTrap("Bob"), ScavTrap("Bob") {
	std::cout << "Default DiamondTrap created." << std::endl;
	this->name = "Bob";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other) {
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

DiamondTrap::DiamondTrap(std::string const &name) {
	std::cout << "DiamondTrap " << name << " created." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->name << " destroyed." << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap " << this->name << " has the Claptrap name of " << this->getName() << "." << std::endl;
}
