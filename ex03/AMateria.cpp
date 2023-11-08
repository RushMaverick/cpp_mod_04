#include "AMateria.hpp"

AMateria::AMateria(std::string const &type){
	this->type_ = type;
}

AMateria::~AMateria(){

}

AMateria::AMateria(const AMateria &copy) {
	this->type_ = copy.getType();
}

AMateria &AMateria::operator=(const AMateria &copy) {
	if (this == &copy)
		return *this;
	this->type_ = copy.getType();
	return *this;
}

std::string const &AMateria::getType() const {
	return this->type_;
}
