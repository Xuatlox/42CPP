#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) : weapon(NULL), name(name) {}

void	HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon) {
	this->weapon = &newWeapon;
}
