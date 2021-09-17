#include "Zombie.hpp"

int main(void) {
	Zombie *zombies;
	int i = 0;

	zombies = zombieHorde(8, "zombie ");
	while (i < 8) {
		zombies[i].announce();
		i++;
	}
	delete[] zombies;
	return (0);
}
