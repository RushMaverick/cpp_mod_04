#include "Cure.hpp"

Cure::Cure() : AMateria("Cure"){
	this->type_ = "Cure";
}

Cure::Cure(std::string const type) : AMateria("Cure") {
	this->type_ = type;
}

Cure::Cure(const Cure &copy) : AMateria("Cure"){
	this->type_ = copy.getType();
}

Cure &Cure::operator=(const Cure &copy){
	this->type_ = copy.getType();
	return (*this);
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