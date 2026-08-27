#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "New default ScavTrap created!" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "New ScavTrap " << name << " created!" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other){
	std::string	name = other.getName();
	this->setName(name);
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	std::cout << "ScavTrap " << this->getName() << "copied!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
	if (this != &other) {
		std::string	name = other.getName();
		this->setName(name);
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
	}
	std::cout << "ScavTrap " << this->getName() << "assigned!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " destroyed!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}
