
#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	{
		ICharacter* me = new Character("Claus Stripes");
		ICharacter *other = new Character("Steph E. Roth");

		std::cout << "me: " << me << std::endl;
		std::cout << "other: " << other << std::endl;

		*other = *me;

		std::cout << "me: " << me << std::endl;
		std::cout << "other: " << other << std::endl;

		delete other;
		delete me;
	}
	std::cout << std::endl << std::endl;
	{
		ICharacter* me = new Character("Claus Stripes");
		ICharacter *other = new Character("Steph E. Roth");
		AMateria *ice = new Ice("Ice");
		AMateria *cure = new Cure("Cure");
		
		me->equip(ice);
		me->equip(cure);

		me->use(0, *other);
		me->use(1, *other);

		me->unequip(0);
		me->unequip(1);
		me->unequip(1);
		me->unequip(2);

		delete other;
		delete me;
	}
	std::cout << std::endl << std::endl;
	{
		ICharacter* me = new Character("Claus Stripes");
		AMateria *ice = new Ice("Ice");
		AMateria *cure = new Cure("Cure");
		AMateria *newCure= cure->clone();
		AMateria *newIce = ice->clone();

		me->equip(newIce);
		me->equip(newCure);

		delete me;
		delete ice;
		delete cure;
	}
	std::cout << std::endl << std::endl;
	{
		ICharacter* me = new Character("Claus Stripes");
		AMateria *ice = new Ice("Ice");
		MateriaSource *pool = new MateriaSource();

		pool->learnMateria(ice);
		AMateria *cure = pool->createMateria("Ice");

		delete me;
		delete pool;
		delete cure;
	}
	return 0;
}