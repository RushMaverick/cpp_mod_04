#include "Cure.hpp"

Cure::Cure(std::string const type){
	
}

Cure::Cure(const Cure &copy){
	this->type_ = copy.getType();
}

Cure &Cure::operator=(const Cure &copy){
	if (this == &copy)
		return *this;
	this->type_ = copy.getType();
}

Cure::~Cure(){

}

AMateria *Cure::clone() const {
	AMateria *newCure = new Cure("Cure");
	return newCure;
}

void Cure::use(ICharacter& character) {
	std::cout << " heals " << character.getName() << "'s wounds." << std::endl;
}