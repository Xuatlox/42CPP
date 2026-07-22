#pragma once
#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

public:
	HumanB(const std::string &name);

	void	attack();
	void	setWeapon(Weapon &newWeapon);
private:
	Weapon		*weapon;
	std::string	name;
};

#endif