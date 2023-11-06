#ifndef DOGHPP
#define DOGHPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain* ownBrain;
	public:
		Dog();
		Dog(std::string _type);
		~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		void makeSound() const;
		std::string getType() const;
		Brain *pickBrain() const;
};

#endif