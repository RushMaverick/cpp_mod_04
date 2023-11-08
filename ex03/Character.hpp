#ifndef CHARACTERHPP
#define CHARACTERHPP

#include "ICharacter.hpp"
#include "Floor.hpp"
class AMateria;

class Character : public ICharacter {
	private:
		AMateria *_inventory[4];
		std::string _name;
		Floor *floor;
	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character &other);
		Character &operator=(const Character &other);
		AMateria &getMateria(int idx, AMateria *_inventory);
		/* Overrides */
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
