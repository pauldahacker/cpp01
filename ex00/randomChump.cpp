#include "Zombie.hpp"

/*
Since we just want to create a Zombie that names and 
announces itself, we do not need to allocate space on the heap.
*/
void	randomChump(std::string name)
{
	Zombie	z = Zombie(name);
	z.announce();
}