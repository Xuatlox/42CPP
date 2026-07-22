#include "Zombie.hpp"

int main( void ) {
	Zombie*	horde = zombieHorde(5, "Hector");
	delete[] horde;
}
