#include "WrongAnimal.hpp"

void WrongAnimal::makeSound() const {
	std::cout << "*Wrong animal noises*" << std::endl;
}

WrongAnimal::WrongAnimal() {
	this->type = "Wrong Animal Type";
}

WrongAnimal::WrongAnimal(std::string _type) {
	this->type = "Wrong Animal Type";
}

WrongAnimal::~WrongAnimal() {

}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	this->type = "Wrong Animal Type";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	if (this == &other)
		return *this;
	this->type = "Wrong Animal Type";
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->type;
}