#include "Dog.h"
#include "Cat.h"

int main()
{
	//Animal animal;
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;
}
