#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		//Orthodox Canonical Form
		ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();
		//the actual exercise
		ScavTrap(std::string name);
		void attack(const std::string& target); //overrides ClapTrap's attack
		void guardGate();
};

#endif
