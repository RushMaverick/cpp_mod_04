#ifndef CHARACTERHPP
#define CHARACTERHPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		AMateria *_inventory[4];
};

#endif

/*
	- Inherits from ICharacter.
	- Has an inventory for 4 materias. (array of &AMateria[4])
	- Has a use(int, ICharacter&) will use the materia at the given position on the target given.
	  Passes it's target parameter to the AMateria::use function.
	- Has a constructor that takes it's name as a parameter. And ANY copy of a Character must be deep.
*/