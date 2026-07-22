#include "Zombie.hpp"

int	main( void ) {
	Zombie	*zombie = NULL;

	zombie = zombie->newZombie("Andy");
	zombie->announce();
	zombie->randomChump("Bryan");
	delete zombie;
}
