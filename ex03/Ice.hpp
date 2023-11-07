#ifndef ICEHPP
#define ICEHPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(std::string const type);
		~Ice();
		Ice(const Ice &copy);
		Ice &operator=(const Ice &copy);
		Ice &clone();
		// use(ICharacter& char);
};

#endif