#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *animalArray[6];

	for (int i = 0; i < 6; i++) {
		if (i % 2 == 0)
			animalArray[i] = new Cat();
		else
			animalArray[i] = new Dog();
	}

	for (int i = 0; i < 6; i++) {
		delete animalArray[i];
	}
	return 0;
}
