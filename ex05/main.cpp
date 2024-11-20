#include "Harl.hpp"

int main(void)
{
	std::string	s;
	Harl h = Harl();
	std::cout << "[DEBUG]" << std::endl;
	h.complain("DEBUG");
	std::cout << "[INFO]" << std::endl;
	h.complain("INFO");
	std::cout << "[WARNING]" << std::endl;
	h.complain("WARNING");
	std::cout << "[ERROR]" << std::endl;
	h.complain("ERROR");
	std::cout << "[THREAT]" << std::endl;
	h.complain("THREAT");
	std::cout << "[" << s << "]" << std::endl;
	h.complain(s);
	return (0);
}