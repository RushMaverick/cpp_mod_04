#ifndef CUREHPP
#define CUREHPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure(std::string type);
		~Cure();
		Cure(const Cure &copy);
		Cure &operator=(const Cure &copy);
		AMateria *clone () const override;
		void use(ICharacter& character);
};

#endif