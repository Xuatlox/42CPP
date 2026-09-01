#include "Dog.h"
#include "Cat.h"

int main()
{
	Animal animals[4] = ;

	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	delete dog;//should not create a leak
	delete cat;

	int	i = 0;
	while (animals[++i])
	{
		delete animals[i];
	}
	delete *animals;
	return 0;
}
