#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "New ScavTrap " << name << " created!" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " destroyed!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}
