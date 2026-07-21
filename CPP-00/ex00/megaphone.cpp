#include <iostream>

int main(const int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		++av;
		while (*av)
		{
			while (**av)
			{
				std::cout << (char) std::toupper(**av);
				++*av;
			}
			++av;
		}
	}
	std::cout << std::endl;
	return 0;
}
