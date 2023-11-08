#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() {
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = NULL;
	}
	floor = new Floor();
	this->_name = "Claus";
}

Character::Character(std::string name) {
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = NULL;
	}
	floor = new Floor();
	this->_name = name;
}

Character::~Character() {
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
	delete floor;
}

Character::Character(const Character &other) {
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = other._inventory[i];
	}
	floor = new Floor();
	this->_name = other.getName();
}

Character &Character::operator=(const Character &other){
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	for (int i = 0; i < 4; i++){
		if (other._inventory[i] != NULL)
			this->_inventory[i] = other._inventory[i]->clone();
	}
	this->floor = other.floor;
	this->_name = other.getName();
	return *this;
}

AMateria &Character::getMateria(int idx, AMateria *_inventory){
	return _inventory[idx];
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	if (!m){
		std::cout << "There is no materia to equip." << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == m)
			return;
		if (this->_inventory[i] == NULL){
			this->_inventory[i] = m;
			std::cout << this->_name << " equips " << m->getType() << " in slot " << i << "." << std::endl;
			return;
		}
	}
	std::cout << "Equipment is full, unequip something to give space." << std::endl;
	delete m;
}

void Character::unequip(int index) {
	if (index >= 0 && index < 4)
	{
		if (this->_inventory[index] == NULL){
			std::cout << "Nothing equipped there." << std::endl;
			return;
		}
		else {
			floor->throwOnFloor(this->_inventory[index]);
			this->_inventory[index] = NULL;
			return;
		}
	}
	std::cout << "That index is in another dimension." << std::endl;
}

void Character::use(int index, ICharacter &target) {
	if (this->_inventory[index] == NULL)
		return;
	if (this->_inventory[index]->getType() == "Ice"){
		std::cout << this->getName();
		this->_inventory[index]->use(target);
		return;
	}
	else if (this->_inventory[index]->getType() == "Cure"){
		std::cout << this->getName();
		this->_inventory[index]->use(target);
		return;
	}
	std::cout << "No materia equipped, kupo!" << std::endl;
}