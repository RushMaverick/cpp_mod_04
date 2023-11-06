#include "WrongCat.hpp"

void WrongCat::makeSound() const {
	std::cout << "*WRONG MEOW MEOW HISS*" << std::endl;
}

WrongCat::WrongCat() {
	std::cout << "WrongCat default Constructor" << std::endl;
	this->type = "WrongCat Type";
	this->ownBrain = new Brain();
}

WrongCat::WrongCat(std::string _type) {
	std::cout << "WrongCat Type Constructor" << std::endl;
	this->type = _type;
	this->ownBrain = new Brain();
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor" << std::endl;
	delete this->ownBrain;
}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "WrongCat Copy Constructor" << std::endl;
	this->type = other.getType();
	this->ownBrain = new Brain(*other.ownBrain);
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	std::cout << "WrongCat Copy Operator Overload" << std::endl;
	if (this == &other)
		return *this;
	this->type = other.getType();
	this->ownBrain = new Brain(*other.ownBrain);
	return *this;
}

std::string WrongCat::getType() const {
	return this->type;
}

Brain *WrongCat::pickBrain() const{
	return this->ownBrain;
}