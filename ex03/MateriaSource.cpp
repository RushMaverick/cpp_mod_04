#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++){
		this->materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++){
		if (this->materias[i] != NULL)
			delete this->materias[i];
		this->materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++){
		this->materias[i] = copy.materias[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++){
		this->materias[i] = copy.materias[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *spell) {
	for (int i = 0; i < 4; i++){
		if (this->materias[i] == NULL) {
			this->materias[i] = spell;
			std::cout << "Materia learned successfully." << std::endl;
			return;
		}
	}
	std::cout << "Cannot learn more materias." << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++){
		if ((this->materias[i] != NULL) && (this->materias[i]->getType() == type)) {
			AMateria *newSpell = this->materias[i]->clone();
			std::cout << "Materia created successfully." << std::endl;
			return newSpell;
		}
	}
	std::cout << "Type not recognized, no materia created." << std::endl;
	return NULL;
}