#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &var);
		~ClapTrap(void);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap& operator=(const ClapTrap &var);
	private:
		std::string name;
		unsigned int Hitpoints;
		unsigned int EnergyPoints;
		unsigned int AttackDamage;
};

#endif
