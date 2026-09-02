#include "Dog.h"
#include "Cat.h"

int main()
{
	Animal *animals[4] = {new Dog, new Cat, new Dog, new Cat};

	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	delete dog;//should not create a leak
	delete cat;

	for (int i = 0; i < 4; i++)
		delete animals[i];
	return 0;
}
