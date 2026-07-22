#pragma once
#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP

#include <string>

class Zombie {

public:

	Zombie( const std::string &zombieName );
	~Zombie( void );

	void	announce( void );

private:

	std::string	name;

};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif