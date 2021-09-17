#include "Zombie.hpp"

int main(void) {
	Zombie *zombie0;
	Zombie *zombie1;

	zombie0 = newZombie("zombie0");
	zombie1 = newZombie("zombie1");

	randomChump("zombie2");
	randomChump("zombie3");

	zombie0->announce();
	zombie1->announce();

	delete zombie0;
	delete zombie1;

	return (0);
}
