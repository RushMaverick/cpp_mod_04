#ifndef ANIMALHPP
#define ANIMALHPP

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string _type);
		virtual ~Animal() = 0;
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual void makeSound() const;
		virtual std::string getType() const;
};

#endif