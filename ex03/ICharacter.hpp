#ifndef ICHARACTERHPP
#define ICHARACTERHPP

#include <iostream>
class AMateria;
class ICharacter {
	protected:
		std::string name_;
	public:
		virtual std::string const & getName() const = 0;
		virtual ~ICharacter() {}
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif