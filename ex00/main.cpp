#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* catz = new Cat();
	const WrongAnimal* wrongCatz = new WrongCat();
	const Animal* dogz = new Dog();
	std::cout << dogz->getType() << " " << std::endl;
	std::cout << catz->getType() << " " << std::endl;
	std::cout << wrongCatz->getType() << " " << std::endl;
	catz->makeSound();
	wrongCatz->makeSound();
	dogz->makeSound();
	meta->makeSound();

	delete meta;
	delete wrongCatz;
	delete catz;
	delete dogz;

	return 0;
}