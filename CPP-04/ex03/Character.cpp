#include "Character.hpp"
#include <iostream>
#include "AMateria.hpp"

Character::Character() : _name("default"), _inventorySize(4)
{
	std::cout << "Character default constructor called" << std::endl;
	int	i = 0;
	while (i < _inventorySize)
	{
		_inventory[i] = NULL;
		++i;
	}
}

Character::Character(std::string const &name) : _name(name), _inventorySize(4)
{
	std::cout << "Character string constructor called" << std::endl;
	int	i = 0;
	while (i < _inventorySize)
	{
		_inventory[i] = NULL;
		++i;
	}
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	int	i = 0;
	while (i < _inventorySize)
	{
		if (_inventory[i])
			delete _inventory[i];
		++i;
	}
}

Character::Character(Character const& other) : _name(other._name), _inventorySize(other._inventorySize)
{
	std::cout << "Character copy constructor called" << std::endl;
	int i = 0;
	while (i < _inventorySize && i < other._inventorySize)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
		++i;
	}
}

Character& Character::operator=(Character const &other)
{
	std::cout << "Character assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		int	i = 0;
		while (i < _inventorySize)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = NULL;
			++i;
		}
		while (i < _inventorySize && i < other._inventorySize && other._inventory[i])
		{
			_inventory[i] = other._inventory[i]->clone();
			++i;
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	std::cout << _name << " has equipped a materia of type " << m->getType() << std::endl;
	int	i = 0;
	while (_inventory[i])
		++i;
	_inventory[i] = m;
}

void Character::unequip(int idx)
{
	std::cout << _name << " has unequipped its materia at index" << idx << std::endl;
	if (_inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (0 > idx || idx >= _inventorySize)
		return ;
	_inventory[idx]->use(target);
}
