#include "Weapon.hpp"

Weapon::Weapon(void) : _type("Default")
{
	std::cout << "Constructing Weapon: " << this->_type << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Constructing Weapon: " << this->_type << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Destroying Weapon: " << this->_type << std::endl;
}

std::string const & Weapon::getType(void)
{
	std::string const &	type = this->_type;
	return (type);
}

void Weapon::setType(std::string const & newType)
{
	this->_type = newType;
}