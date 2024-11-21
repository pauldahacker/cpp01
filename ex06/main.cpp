#include "Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Too few or too many arguments." << std::endl;
		return (1);
	}
	Harl h = Harl();
	h.filter(argv[1]);
	return (0);
}