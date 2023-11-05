#ifndef DOGHPP
#define DOGHPP

#include <iostream>

#include "Animal.hpp"

class Dog : public Animal{
	protected:
		std::string type;
	public:
		Dog();
		Dog(std::string _type);
		~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		void makeSound() const;
		std::string getType() const;
};

#endif