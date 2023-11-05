#include "WrongCat.hpp"

void WrongCat::makeSound() const {
	std::cout << "*WRONG MEOW MEOW HISS*" << std::endl;
}

WrongCat::WrongCat() {
	this->type = "Wrong Cat Type";
}

WrongCat::WrongCat(std::string _type) {
	this->type = "Wrong Cat Type";
}

WrongCat::~WrongCat() {

}

WrongCat::WrongCat(const WrongCat &other) {
	this->type = "Wrong Cat Type";
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	if (this == &other)
		return *this;
	this->type = "Wrong Cat Type";
	return *this;
}

std::string WrongCat::getType() const {
	return this->type;
}