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

void Harl::complain(std::string level)
{
	std::string	comments[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; ++i)
	{
		if (level.compare(comments[i]) == 0)
			return (this->*functions[i])();
	}
	std::cout << "Level does not exist" << std::endl;
}