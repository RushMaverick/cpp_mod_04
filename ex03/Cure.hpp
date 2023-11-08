#ifndef CUREHPP
#define CUREHPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(std::string type);
		~Cure();
		Cure(const Cure &copy);
		Cure &operator=(const Cure &copy);
		AMateria *clone () const;
		void use(ICharacter& character);
};

#endif