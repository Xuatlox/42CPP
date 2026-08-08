#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "New FragTrap " << name << " created!" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->getName() << " is ready for high-fives." << std::endl;
}
