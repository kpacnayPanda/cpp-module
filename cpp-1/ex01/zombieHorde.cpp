#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	Zombie *zombies;
	std::stringstream str;
	int i = 0;

	zombies = new Zombie[N];
	while (i < N) {
		str.str(std::string());
		str << i;
		zombies[i].give_name(name + str.str());
		i++;
	}

	return (zombies);
}
