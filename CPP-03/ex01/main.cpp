#include "ScavTrap.hpp"

int main() {
	ScavTrap	a("Bill");

	a.attack("Bob");
	a.beRepaired(1);
	a.takeDamage(1);
	a.guardGate();
}
