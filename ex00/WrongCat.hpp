#ifndef WRONGCATHPP
#define WRONGCATHPP

#include <iostream>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	protected:
		std::string type;
	public:
		WrongCat();
		WrongCat(std::string _type);
		~WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat &operator=(const WrongCat &other);
		void makeSound() const;
		std::string getType() const;
};

#endif