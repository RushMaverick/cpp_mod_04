#include "Ice.hpp"

Ice::Ice(std::string const type){
	
}

Ice::Ice(const Ice &copy){
	this->type_ = copy.getType();
}

Ice &Ice::operator=(const Ice &copy){
	if (this == &copy)
		return *this;
	this->type_ = copy.getType();
}

Ice::~Ice(){
	delete this;
}

AMateria *Ice::clone() const {
	AMateria *newIce = new Ice("Ice");
	return newIce;
}

void Ice::use(ICharacter& character) {
	std::cout << " shoots an ice bolt at " << character.getName() << std::endl;
}