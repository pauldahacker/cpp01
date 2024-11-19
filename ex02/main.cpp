#include <iostream>
#include <string>

int main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "Memory address of string variable:" << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << "Memory address of stringPTR:" << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << "Memory address of stringREF:" << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "Value of string variable:" << std::endl;
	std::cout << string << std::endl;
	std::cout << "Value pointed to by stringPTR:" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:" << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}