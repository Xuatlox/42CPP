#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() {
	std::cout << "New default FragTrap created!" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "New FragTrap " << name << " created!" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other){
	std::string	name = other.getName();
	this->setName(name);
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	std::cout << "FragTrap " << this->getName() << "copied!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other) {
	if (this != &other) {
		std::string	name = other.getName();
		this->setName(name);
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
	}
	std::cout << "FragTrap " << this->getName() << "assigned!" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->getName() << " is ready for high-fives." << std::endl;
}
