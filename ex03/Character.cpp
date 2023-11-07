#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() {
	for (int i; i < 3; i++){
		this->_inventory[i] = NULL;
	}
	this->name_ = "Claus";
}

Character::Character(std::string name) {
	for (int i; i < 3; i++){
		this->_inventory[i] = NULL;
	}
	this->name_ = name;
}

Character::~Character() {
 //Might have to delete the array.
}

Character::Character(const Character &other) {
	for (int i; i < 3; i++){
		this->_inventory[i] = NULL;
	}
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
	return this->name_;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL){
			this->_inventory[i] = m;
			return;
		}
	}
	std::cout << "Equipment is full, unequip something to give space." << std::endl;
}

void Character::unequip(int index) {
	if (this->_inventory[index] == NULL){
		std::cout << "Nothing equipped there." << std::endl;
		return;
	}
	//TO BE CONTINUED >>>
}

void Character::use(int index, ICharacter &target) {
	std::cout << this->getName();
	if (this->_inventory[index]->getType() == "Ice"){
		this->_inventory[index]->use(target);
	}
	else if (this->_inventory[index]->getType() == "Cure"){
		this->_inventory[index]->use(target);
	}
	else
		std::cout << "No materia equipped, kupo!" << std::endl;
}