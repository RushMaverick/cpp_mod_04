#include "Floor.hpp"
#include "AMateria.hpp"

Floor::Floor(){
	floorLimit = 50;
	for (int i = 0; i < floorLimit; i++){
		this->floor[i] = NULL;
	}
}

Floor::~Floor(){
	for (int i = 0; i < floorLimit; i++){
		if (floor[i] != NULL)
			delete floor[i];
		this->floor[i] = NULL;
	}
}


Floor &Floor::operator=(const Floor &copy) {
	this->floorLimit = copy.getFloorLimit();
	for (int i = 0; i < floorLimit; i++){
		if (this->floor[i] != NULL)
			delete this->floor[i];
	}
	for (int i = 0; i < floorLimit; i++){
		this->floor[i] = copy.floor[i]->clone();
	}
	return *this;
}

Floor::Floor(const Floor &copy) {
	*this = copy;
}

void Floor::throwOnFloor(AMateria *spell) {
	for (int i = 0; i < floorLimit; i++){
		if (floor[i] == NULL){
			floor[i] = spell;
			std::cout << spell->getType() << " materia unequipped and dropped on the floor." << std::endl;
			return;
		}
	}
	std::cout << "The floor is so full of trashed items, you can't seem to drop anything!" << std::endl;
	delete spell;
}

int Floor::getFloorLimit() const {
	return floorLimit;
}