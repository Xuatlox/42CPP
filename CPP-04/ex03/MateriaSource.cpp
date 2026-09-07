#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : _storageSize(4)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	int	i = 0;
	while (i < _storageSize)
	{
		_storage[i] = NULL;
		++i;
	}
}

MateriaSource::MateriaSource(MateriaSource const &other) : _storageSize(other._storageSize)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	int	i = 0;
	while (i < _storageSize && i < other._storageSize)
	{
		if (other._storage[i])
			_storage[i] = other._storage[i]->clone();
		else
			_storage[i] = NULL;
		++i;
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const &other)
{
	std::cout << "MateriaSource assignment operator called" << std::endl;
	if (this != &other)
	{
		int	i = 0;
		while (i < _storageSize)
		{
			if (_storage[i])
				delete _storage[i];
			_storage[i] = NULL;
			++i;
		}
		while (i < _storageSize && i < other._storageSize && other._storage[i])
		{
			_storage[i] = other._storage[i]->clone();
			++i;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	int	i = 0;
	while (i < _storageSize)
	{
		if (_storage[i])
			delete _storage[i];
		++i;
	}
}

void MateriaSource::learnMateria(AMateria *other)
{
	std::cout << "MateriaSource has learned a new materia of type " << other->getType() << std::endl;
	int	i = 0;
	while (_storage[i])
		++i;
	_storage[i] = other;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	std::cout << "MateriaSource tried to create a new materia of type " << type << std::endl;
	int	i = 0;
	while (i < _storageSize)
	{
		if (_storage[i]->getType() == type)
			return _storage[i]->clone();
		++i;
	}
	return NULL;
}
