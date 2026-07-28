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
		std::cout << "Invalid arguments: ./replace inFile str1 str2" << std::endl;
	else {
		std::string	content;
		std::string	inFileName = av[1];
		std::ifstream	inFile(inFileName.c_str());
		if (!inFile.is_open()) {
			std::cout << "Infile not found" << std::endl;
			return 0;
		}
		std::string	outFileName = inFileName + ".replace";
		std::ofstream	outFile(outFileName.c_str());
		if (!outFile.is_open()) {
			std::cout << "Cannot create/edit outfile" << std::endl;
			return 0;
		}
		outFile << content;
		std::string	line;
		while (std::getline(inFile, line)) {
			translateContent(line, av[2], av[3]);
			outFile << line;
			if (!inFile.eof())
				outFile << std::endl;
		}
		inFile.close();
		outFile.close();
	}
}
