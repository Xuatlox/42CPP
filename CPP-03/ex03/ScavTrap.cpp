#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "New default ScavTrap created!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "New ScavTrap " << name << " created!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other){
	this->name = name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "ScavTrap " << this->name << " copied!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "ScavTrap " << this->name << " assigned!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name << " destroyed!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}
