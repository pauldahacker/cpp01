#include "Zombie.hpp"
#include <climits>

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int		N = 42;
	Zombie*	horde = zombieHorde(N, "Paul");
	std::cout << "Horde of " << N << " Zombies created!" << std::endl;
	for (int i = 0; i < N; i++)
	{
		std::cout << "Announcing Zombie " << i << std::endl;
		horde[i].announce();
	}
	delete [] horde;
}