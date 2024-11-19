#include "Zombie.hpp"

/*
allocates memory on the heap because we want to use Zombie after
*/
Zombie*	newZombie(std::string name);

/*
memory can be allocated on the stack because we do not need Zombie.
*/
void	randomChump(std::string name);

int	main(void)
{
	Zombie*	z = newZombie("Paul");
	z->announce();
	randomChump("Juliette");
	delete z;
	return (0);
}