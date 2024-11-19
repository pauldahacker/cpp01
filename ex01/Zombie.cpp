#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Constructing Zombie: " << name << std::endl;
}

Zombie::Zombie(void) : _name("Default")
{
	std::cout << "Constructing Zombie: " << this->_name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destroying Zombie: " << this->_name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}