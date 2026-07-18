#include <iostream>

int main(const int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		++av;
		while (*av)
		{
			std::cout << std::uppercase << *av << " ";
			++av;
		}
	}
	return 0;
}
