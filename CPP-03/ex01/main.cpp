#include "ScavTrap.hpp"

int main() {
	ScavTrap	a;
	ScavTrap	b(a);
	ScavTrap	c = a;

	a.attack("Bob");
	a.beRepaired(1);
	a.takeDamage(1);
	a.guardGate();
}
