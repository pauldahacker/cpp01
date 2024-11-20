#include <iostream>
#include <fstream>

std::string	replaceLine(std::string current, std::string s1, std::string s2)
{
	std::size_t	found = current.find(s1);

	while (found != std::string::npos)
	{
		current.erase(found, s1.length());
		current.insert(found, s2);
		found = current.find(s1, found + s2.length());
	}
	return (current);
}

void replace(std::string file, std::string s1, std::string s2)
{
	std::ifstream	ifs(file);
	if (!ifs)
	{
		std::cerr << file << " cannot be opened" << std::endl;
		exit(EXIT_FAILURE); 
	}
	std::ofstream	ofs(file + ".replace");
	if (!ofs)
	{
		ifs.close();
		std::cerr << file + ".replace" << " cannot be created" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string currentStr;
	while (std::getline(ifs, currentStr))
	{
		ofs << replaceLine(currentStr, s1, s2);
		ofs << std::endl;
	}
	ifs.close();
	ofs.close();
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Too few or too many arguments" << std::endl;
		return (1); 
	}
	replace(argv[1], argv[2], argv[3]);
	return (0);
}