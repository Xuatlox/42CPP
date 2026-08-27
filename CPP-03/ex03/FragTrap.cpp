#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() {
	std::cout << "New default FragTrap created!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "New FragTrap " << name << " created!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other){
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "FragTrap " << this->name << " copied!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other) {
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "FragTrap " << this->name << " assigned!" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->name << " is ready for high-fives." << std::endl;
}
