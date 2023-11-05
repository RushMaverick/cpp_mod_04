#include "Dog.hpp"

void Dog::makeSound() const {
	std::cout << "*WOOF WOOF*" << std::endl;
}

Dog::Dog() {
	this->type = "Dog Type";
}

Dog::Dog(std::string _type) {
	this->type = "Dog Type";
}

Dog::~Dog() {

}

Dog::Dog(const Dog &other) {
	this->type = "Dog Type";
}

Dog &Dog::operator=(const Dog &other){
	if (this == &other)
		return *this;
	this->type = "Dog Type";
	return *this;
}

std::string Dog::getType() const {
	return this->type;
}