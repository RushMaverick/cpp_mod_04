#include "Dog.hpp"

void Dog::makeSound() const {
	std::cout << "*WOOF WOOF*" << std::endl;
}

Dog::Dog() {
	std::cout << "Dog default Constructor" << std::endl;
	this->type = "Dog Type";
	this->ownBrain = new Brain();
}

Dog::Dog(std::string _type) {
	std::cout << "Dog Type Constructor" << std::endl;
	this->type = _type;
	this->ownBrain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog Destructor" << std::endl;
	delete this->ownBrain;
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog Copy Constructor" << std::endl;
	this->type = other.getType();
	this->ownBrain = new Brain(*other.ownBrain);
}

Dog &Dog::operator=(const Dog &other){
	std::cout << "Dog Copy Operator Overload" << std::endl;
	if (this == &other)
		return *this;
	this->type = other.getType();
	this->ownBrain = new Brain(*other.ownBrain);
	return *this;
}

std::string Dog::getType() const {
	return this->type;
}

Brain *Dog::pickBrain() const{
	return this->ownBrain;
}