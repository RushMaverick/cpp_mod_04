#ifndef CATHPP
#define CATHPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain* ownBrain;
	public:
		Cat();
		Cat(std::string _type);
		~Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		void makeSound() const;
		std::string getType() const;
		Brain *pickBrain() const;
};

#endif