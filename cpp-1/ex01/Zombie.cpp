#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::~Zombie() {
	std::cout << this->name << " just died such a pity" << std::endl;
}

void Zombie::announce(void) {
	std::cout << "<" << this->name << ">" << "  BraiiiiiiinnnzzzZ..." <<std::endl;
}

void Zombie::give_name(std::string name) {
	this->name = name;
}
