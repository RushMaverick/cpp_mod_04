#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() {
	
}

Character::Character(std::string name) {
	this->name_ = name;
}

Character::~Character() {

}

Character::Character(const Character &other) {
	this->name_ = other.getName();
}

Character &Character::operator=(const Character &other){
	if (this == &other)
		return *this;
	this->name_ = other.getName();
	return *this;
}

AMateria &Character::getMateria(int idx, AMateria *_inventory){
	return _inventory[idx];
}

std::string const &Character::getName() const {

}

void Character::equip(AMateria *m) {
	
}

void Character::unequip(int idx) {

}

void Character::use(int index, ICharacter &target) {

}