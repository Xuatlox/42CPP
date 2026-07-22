#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(const std::string &zombieName ) : name(zombieName) {}

Zombie::~Zombie() {
	std::cout << name << ": Blurgh" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
