#ifndef AMATERIAHPP
#define AMATERIAHPP

#include <iostream>

class AMateria {
	protected:
		std::string type_;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &copy);
		~AMateria();

		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);
};

#endif