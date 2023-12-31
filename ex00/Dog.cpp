#include "Dog.hpp"

void Dog::makeSound() const {
	std::cout << "*WOOF WOOF*" << std::endl;
}

Dog::Dog() {
	std::cout << "Dog default Constructor" << std::endl;
	this->type = "Dog Type";
}

Dog::Dog(std::string _type) {
	std::cout << "Dog Type Constructor" << std::endl;
	this->type = "Dog Type";
}

Dog::~Dog() {
	std::cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog Copy Constructor" << std::endl;
	this->type = "Dog Type";
}

Dog &Dog::operator=(const Dog &other){
	std::cout << "Dog Copy Operator Overload" << std::endl;
	if (this == &other)
		return *this;
	this->type = "Dog Type";
	return *this;
}

std::string Dog::getType() const {
	return this->type;
}