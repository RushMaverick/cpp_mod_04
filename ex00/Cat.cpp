#include "Cat.hpp"

void Cat::makeSound() const {
	std::cout << "*MEOW MEOW HISS*" << std::endl;
}

Cat::Cat() {
	this->type = "Cat Type";
}

Cat::Cat(std::string _type) {
	this->type = "Cat Type";
}

Cat::~Cat() {

}

Cat::Cat(const Cat &other) {
	this->type = "Cat Type";
}

Cat &Cat::operator=(const Cat &other){
	if (this == &other)
		return *this;
	this->type = "Cat Type";
	return *this;
}

std::string Cat::getType() const {
	return this->type;
}