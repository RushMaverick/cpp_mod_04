#include "WrongCat.hpp"

void WrongCat::makeSound() const {
	std::cout << "*WRONG MEOW MEOW HISS*" << std::endl;
}

WrongCat::WrongCat() {
	std::cout << "Wrong Cat default Constructor" << std::endl;
	this->type = "Wrong Cat Type";
}

WrongCat::WrongCat(std::string _type) {
	std::cout << "Wrong Cat Type Constructor" << std::endl;
	this->type = "Wrong Cat Type";
}

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat Destructor" << std::endl;

}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "Wrong Cat Copy Constructor" << std::endl;
	this->type = "Wrong Cat Type";
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	std::cout << "Wrong Cat Copy Operator Overload" << std::endl;
	if (this == &other)
		return *this;
	this->type = "Wrong Cat Type";
	return *this;
}

std::string WrongCat::getType() const {
	return this->type;
}