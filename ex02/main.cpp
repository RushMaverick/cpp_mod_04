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

	((Cat*)animalArray[0])->pickBrain()->setIdea(0, "Fish are inherently bad.");
	Cat *otherCat = new Cat("Cat");

	*otherCat = *((Cat*)animalArray[0]);
	std::cout << std::endl;
	std::cout << otherCat->pickBrain()->getIdea(0) << std::endl;
	std::cout << ((Cat*)animalArray[0])->pickBrain()->getIdea(0) << std::endl;

	((Cat*)animalArray[0])->pickBrain()->setIdea(0, "Actually, I like fish now.");

	std::cout << otherCat->pickBrain()->getIdea(0) << std::endl;
	std::cout << ((Cat*)animalArray[0])->pickBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 6; i++) {
		delete animalArray[i];
	}
	return 0;
}
