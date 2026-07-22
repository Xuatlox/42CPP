#include "Zombie.hpp"

int	main( void ) {
	Zombie	*zombie = NULL;

	zombie = newZombie("Andy");
	zombie->announce();
	randomChump("Bryan");
	delete zombie;
}
