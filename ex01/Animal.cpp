#include "Animal.hpp"

void Animal::makeSound() const {
	std::cout << "*Animal noises*" << std::endl;
}

Animal::Animal() {
	std::cout << "Animal default Constructor" << std::endl;
	this->type = "Animal Type";
}

Animal::Animal(std::string _type) {
	std::cout << "Animal Type Constructor" << std::endl;
	this->type = "Animal Type";
}

Animal::~Animal() {
	std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal Copy Operator" << std::endl;
	this->type = "Animal Type";
}

Animal &Animal::operator=(const Animal &other){
	std::cout << "Animal Copy Operator Overload" << std::endl;
	if (this == &other)
		return *this;
	this->type = "Animal Type";
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}