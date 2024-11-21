#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::Zombie(void) : _name("Default")
{
	return ;
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