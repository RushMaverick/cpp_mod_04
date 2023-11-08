#ifndef AMATERIAHPP
#define AMATERIAHPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string type_;
	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &copy);
		virtual ~AMateria();

		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif