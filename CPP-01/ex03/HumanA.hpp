#pragma once
#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

public:
	HumanA(const std::string &name, Weapon &startWeapon);

	void	attack();
private:
	std::string	name;
	Weapon		&weapon;
};

#endif