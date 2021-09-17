#include "HumanB.hpp"

HumanB::HumanB(std::string name): weapon(NULL) {
	this->name = name;
}

void HumanB::attack(void) {
	std::cout << this->name << " attacks with his ";
	if (this->weapon == NULL) {
		std::cout << "leg" << std::endl;
	} else {
		std::cout << this->weapon->getType() << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}
