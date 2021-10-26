#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("sometrap") {
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 10;
	std::cout << this->name << " default ClapTrap was created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name) {
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 10;
	std::cout << this->name << " ClapTrap was created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &var): name(var.name), Hitpoints(var.Hitpoints), EnergyPoints(var.EnergyPoints), AttackDamage(var.AttackDamage) {
	std::cout << this->name << " Copy ClapTrap was created!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << "ClapTrap " << " was destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &var) {
	this->Hitpoints = var.Hitpoints;
	this->EnergyPoints = var.EnergyPoints;
	this->AttackDamage = var.AttackDamage;
	std::cout << "Assignation operator called!" << std::endl;
	return(*this);
}

void ClapTrap::attack(std::string const & target) {
	std::cout << this->name << "ClapTrap " << " attack " << target << " causing " << this->AttackDamage << " points of damage " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->Hitpoints += amount;

	std::cout << this->name << " ClapTrap is being repaired by " << amount << " hitpoints" << std::endl;
	std::cout << this->name << " ClapTrap have " << this->Hitpoints << " hitpoints" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->Hitpoints < amount) {
		this->Hitpoints = 0;
	} else {
		this->Hitpoints -= amount;
	}

	std::cout << this->name << " ClapTrap is being ataked by " << amount << " points of damage" << std::endl;
	std::cout << this->name << " ClapTrap have " << this->Hitpoints << " hitpoints" << std::endl;
}
