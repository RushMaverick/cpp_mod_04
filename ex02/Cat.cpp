#include "Cat.hpp"

void Cat::makeSound() const {
	std::cout << "*MEOW MEOW HISS*" << std::endl;
}

Cat::Cat() {
	std::cout << "Cat default Constructor" << std::endl;
	this->type = "Cat Type";
	this->ownBrain = new Brain();
}

Cat::Cat(std::string _type) {
	std::cout << "Cat Type Constructor" << std::endl;
	this->type = _type;
	this->ownBrain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat Destructor" << std::endl;
	delete this->ownBrain;
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat Copy Constructor" << std::endl;
	this->type = other.getType();
	this->ownBrain = new Brain(*other.ownBrain);
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat Copy Operator Overload" << std::endl;
	if (this == &other)
		return *this;
	this->type = other.getType();
	this->ownBrain = new Brain(*other.ownBrain);
	return *this;
}

std::string Cat::getType() const {
	return this->type;
}

Brain *Cat::pickBrain() const{
	return this->ownBrain;
}