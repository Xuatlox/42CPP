#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		MateriaSource &operator=(MateriaSource const &other);
		~MateriaSource();

		void		learnMateria(AMateria *other);
		AMateria*	createMateria(std::string const &type);
	protected:
		AMateria*	_storage[4];
		int			_storageSize;
};

#endif
