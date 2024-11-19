#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Constructing Zombie: " << name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destroying Zombie: " << this->_name << std::endl;
}

void Zombie::announce(void)
{
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}