#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"
#include "WrongDog.h"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongDog = new WrongDog();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wrongDog->getType() << " " << std::endl;
	std::cout << wrongMeta->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();
	wrongCat->makeSound();
	wrongDog->makeSound();
	wrongMeta->makeSound();
	delete meta;
	delete dog;
	delete cat;
	delete wrongMeta;
	delete wrongDog;
	delete wrongCat;

	return 0;
}
