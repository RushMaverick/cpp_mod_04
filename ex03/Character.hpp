#ifndef CHARACTERHPP
#define CHARACTERHPP

#include "ICharacter.hpp"
class AMateria;

class Character : public ICharacter {
	private:
		AMateria *_inventory[4];
	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character &other);
		Character &operator=(const Character &other);
		AMateria &getMateria(int idx, AMateria *_inventory);
		/* Overrides */
		virtual std::string const & getName() const override;
		virtual void equip(AMateria* m) override;
		virtual void unequip(int idx) override;
		virtual void use(int idx, ICharacter& target) override;
};

#endif

/*
	- Inherits from ICharacter.
	- Has an inventory for 4 materias. (array of &AMateria[4])
	- Has a use(int, ICharacter&) will use the materia at the given position on the target given.
	  Passes it's target parameter to the AMateria::use function.
	- Has a constructor that takes it's name as a parameter. And ANY copy of a Character must be deep.
*/