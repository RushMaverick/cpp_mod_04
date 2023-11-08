#include "Ice.hpp"

Ice::Ice() : AMateria("Ice"){
	this->type_ = "Ice";
}

Ice::Ice(std::string const type) : AMateria("Ice"){
	this->type_ = type;
}

Ice::Ice(const Ice &copy) : AMateria("Ice"){
	this->type_ = copy.getType();
}

Ice &Ice::operator=(const Ice &copy){
	this->type_ = copy.getType();
	return *this;
}

Ice::~Ice(){
}

AMateria *Ice::clone() const {
	AMateria *newIce = new Ice("Ice");
	return newIce;
}

void Ice::use(ICharacter& character) {
	std::cout << " shoots an ice bolt at " << character.getName() << std::endl;
}