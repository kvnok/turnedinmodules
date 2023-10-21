#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		//Orthodox Canonical Form
		FragTrap();
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();
		//the actual exercise
		FragTrap(std::string name);
		void highFivesGuys(void);
};

#endif
