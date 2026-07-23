#include <iostream>
#include <fstream>

static void	translateContent(std::string &content, const std::string &toFind, const std::string &replace) {
	std::size_t	pos = 0;

	while ((pos = content.find(toFind, pos)) != std::string::npos) {
		content = content.substr(0, pos) + replace + content.substr(pos + toFind.length());
	}
}

int main(const int ac, char **av) {
	if (ac != 4)
		std::cout << "Invalid arguments" << std::endl;
	else {
		std::string	content;
		const std::string	fileName = av[1];
		std::ifstream	inFile;
		inFile.open(fileName);
		if (!inFile.is_open()) {
			std::cout << "Infile not found" << std::endl;
			return 0;
		}
		std::ofstream	outFile;
		outFile.open(fileName + ".replace");
		if (!outFile.is_open()) {
			std::cout << "Cannot create/edit outfile" << std::endl;
			return 0;
		}
		outFile << content;
		std::string	line;
		while (std::getline(inFile, line)) {
			translateContent(line, av[2], av[3]);
			if (!inFile.eof())
				std::cout << "\n";
		}
		inFile.close();
		outFile.close();
	}
}
