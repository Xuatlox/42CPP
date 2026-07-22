#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &startWeapon) : name(name), weapon(startWeapon) {}

void	HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
