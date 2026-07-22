#include "Zombie.hpp"
#include <iostream>

Zombie::~Zombie() {
	std::cout << name << ": Blurgh" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->name = name;
}
