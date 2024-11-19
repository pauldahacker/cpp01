#include "Zombie.hpp"

/*
Since we want to create, then return a Zombie to be used
outside the function scope, we need to allocate on the heap.
*/
Zombie*	newZombie(std::string name)
{
	return (new Zombie(name));
}