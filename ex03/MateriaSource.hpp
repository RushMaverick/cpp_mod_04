#ifndef MATERIASOURCEHPP
#define MATERIASOURCEHPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria *materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &copy);
		~MateriaSource();
		void learnMateria(AMateria *spell);
		AMateria* createMateria(std::string const & type);
};

#endif