#ifndef FLOORHPP
#define FLOORHPP

#include <iostream>

class AMateria;

class Floor {
	private:
		AMateria *floor[50];
	public:
		Floor();
		Floor(const Floor &copy);
		Floor &operator=(const Floor &copy);
		~Floor();
		void throwOnFloor(AMateria &spell);
};

#endif