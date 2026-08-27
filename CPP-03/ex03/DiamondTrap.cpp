#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("Bob_clap_trap") {
	std::cout << "Default DiamondTrap created." << std::endl;
	this->name = "Bob";
	this->hitPoints = FragTrap::hitPoints;
	this->setEnergyPoints(this->getEnergyPoints());
}

DiamondTrap::DiamondTrap(DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	std::string	name = other.getName();
	this->setName(name);
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other) {
	if (this != &other) {
		std::string	name = other.getName();
		this->setName(name);
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
	}
	return *this;
}

DiamondTrap::DiamondTrap(std::string const &name) {
	std::cout << "DiamondTrap " << name << " created." << std::endl;
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->name << " destroyed." << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap " << this->name << " has the Claptrap name of " << this->getName() << "." << std::endl;
}
