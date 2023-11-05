#include "Animal.hpp"

void Animal::makeSound() const {
	std::cout << "*Animal noises*" << std::endl;
}

Animal::Animal() {
	this->type = "Animal Type";
}

Animal::Animal(std::string _type) {
	this->type = "Animal Type";
}

Animal::~Animal() {

}

Animal::Animal(const Animal &other) {
	this->type = "Animal Type";
}

Animal &Animal::operator=(const Animal &other){
	if (this == &other)
		return *this;
	this->type = "Animal Type";
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}