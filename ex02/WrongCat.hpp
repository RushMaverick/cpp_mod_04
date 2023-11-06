#ifndef WRONGCATHPP
#define WRONGCATHPP

#include <iostream>

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal {
	private:
		Brain* ownBrain;
	public:
		WrongCat();
		WrongCat(std::string _type);
		~WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat &operator=(const WrongCat &other);
		void makeSound() const;
		std::string getType() const;
		Brain *pickBrain() const;
};

#endif