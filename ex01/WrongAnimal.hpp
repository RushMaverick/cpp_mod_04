#ifndef WRONGANIMALHPP
#define WRONGANIMALHPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string _type);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		void makeSound() const;
		std::string getType() const;
};

#endif