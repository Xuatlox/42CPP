#include "DiamondTrap.hpp"

int main() {
	DiamondTrap	a("Bill");

	a.attack("Bob");
	a.beRepaired(1);
	a.takeDamage(1);
	a.whoAmI();
}
