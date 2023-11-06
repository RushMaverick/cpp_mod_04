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
	
	Cat cat;

	cat.pickBrain()->setIdea(0, "What is the meaning of existence.");
	Cat copy(cat);
	std::cout << cat.pickBrain()->getIdea(0) << std::endl;
	std::cout << copy.pickBrain()->getIdea(0) << std::endl;

	for (int i = 0; i < 6; i++) {
		delete animalArray[i];
	}
	return 0;
}
