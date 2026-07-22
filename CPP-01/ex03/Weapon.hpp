#pragma once
#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP

#include <string>

class	Weapon {

public:
	Weapon(const std::string &type);

	const std::string &getType();
	void	setType(const std::string &value);

private:
	std::string	type;
};

#endif