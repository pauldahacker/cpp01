#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon) : _name(name), _weapon(weapon)
{
	std::cout << "Human B (" << name << ") created" << std::endl;
}

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "Human B (" << this->_name << ") created" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Human B (" << this->_name << ") destroyed" << std::endl;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}