#include "WrongAnimal.hpp"

void WrongAnimal::makeSound() const {
	std::cout << "*Wrong animal noises*" << std::endl;
}

WrongAnimal::WrongAnimal() {
	std::cout << "Wrong Animal default Constructor" << std::endl;
	this->type = "Wrong Animal Type";
}

WrongAnimal::WrongAnimal(std::string _type) {
	std::cout << "Wrong Animal string Constructor" << std::endl;
	this->type = "Wrong Animal Type";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "Wrong Animal Copy Constructor" << std::endl;
	this->type = "Wrong Animal Type";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << "Wrong Animal Copy Operator Overload" << std::endl;
	if (this == &other)
		return *this;
	this->type = "Wrong Animal Type";
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->type;
}