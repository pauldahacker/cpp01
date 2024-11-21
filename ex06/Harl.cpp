#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "This is Harl's DEBUG message!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "This is Harl's INFO message!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "This is Harl's WARNING message!" << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is Harl's ERROR message!" << std::endl;
}

void Harl::filter(std::string level)
{
	std::string	comments[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "SWITCH"};
	int	i = 0;
	while (i < 5 && level.compare(comments[i]) != 0)
		++i;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		case 4:
			std::cout << "You've killed Harl." << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}