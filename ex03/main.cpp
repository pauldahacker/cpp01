#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{	
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	std::cout << "Switching weapons..." << std::endl;
	club.setType("some other type of club");
	bob.attack();
	std::cout << "Bob done..." << std::endl;

	club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	std::cout << "Switching weapons..." << std::endl;
	club.setType("some other type of club");
	jim.attack();
	std::cout << "Jim done..." << std::endl;

	return (0);
}