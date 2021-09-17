#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <sstream>

class Zombie {

private:
	std::string name;

public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void give_name(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
