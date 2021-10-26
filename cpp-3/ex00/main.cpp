#include "ClapTrap.hpp"

int main() {
	ClapTrap a;
	ClapTrap b("test");
	ClapTrap c(b);

	a.attack("test");
	b.takeDamage(2);
	c.attack("test");
	b.takeDamage(4);
	b.beRepaired(10);

	return (0);
}
