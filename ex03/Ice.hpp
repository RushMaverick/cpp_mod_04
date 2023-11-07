#ifndef ICEHPP
#define ICEHPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(std::string const type);
		~Ice();
		Ice(const Ice &copy);
		Ice &operator=(const Ice &copy);
		AMateria *clone() const override;
		void use(ICharacter& character);
};

#endif