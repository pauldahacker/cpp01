#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon) : _name(name), _weapon(&weapon)
{
	std::cout << "Human B (" << name << ") created" << std::endl;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "Human B (" << this->_name << ") created" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Human B (" << this->_name << ") destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void)
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " does not have a weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}