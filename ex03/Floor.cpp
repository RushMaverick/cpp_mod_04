#include "Floor.hpp"
#include "AMateria.hpp"

Floor::Floor(){
	for (int i = 0; i < 50; i++){
		this->floor[i] = NULL;
	}
}

Floor::~Floor(){
	for (int i = 0; i < 50; i++){
		delete floor[i];
		this->floor[i] = NULL;
	}
}

Floor::Floor(const Floor &copy) {
	for (int i = 0; i < 50; i++){
		this->floor[i] = copy.floor[i];
	}
}

Floor &Floor::operator=(const Floor &copy) {
	for (int i = 0; i < 50; i++){
		this->floor[i] = copy.floor[i];
	}
	return *this;
}

void Floor::throwOnFloor(AMateria &spell) {
	for (int i = 0; i < 50; i++){
		if (floor[i] == NULL){
			floor[i] = &spell;
			std::cout << spell.getType() << " materia dropped on the \
				floor, never to be seen again..." << std::endl;
			return;
		}
	}
	std::cout << "The floor is so full of trashed items,\
		you can't seem to drop anything!" << std::endl;
}