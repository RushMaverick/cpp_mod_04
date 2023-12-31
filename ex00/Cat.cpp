#include "Cat.hpp"

void Cat::makeSound() const {
	std::cout << "*MEOW MEOW HISS*" << std::endl;
}

Cat::Cat() {
	this->type = "Cat Type";
	std::cout << "Cat default Constructor" << std::endl;
}

Cat::Cat(std::string _type) {
	std::cout << "Cat Type Constructor" << std::endl;
	this->type = "Cat Type";
}

Cat::~Cat() {
	std::cout << "Cat Destructor" << std::endl;
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat Copy Constructor" << std::endl;
	this->type = "Cat Type";
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat Copy Operator Overload" << std::endl;
	if (this == &other)
		return *this;
	this->type = "Cat Type";
	return *this;
}

std::string Cat::getType() const {
	return this->type;
}