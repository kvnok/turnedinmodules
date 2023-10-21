#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		std::string getName();
		void attack();
		void setWeapon(Weapon &weapon);
		~HumanB();
	private:
		std::string name;
		Weapon *weapon; //pointer can be nullptr
};

#endif
