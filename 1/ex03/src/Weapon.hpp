#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Weapon {
	public:
		Weapon();
		Weapon(const std::string &type);
		std::string &getType();
		void setType(const std::string &type);
		~Weapon();
	private:
		std::string type;
};

#endif
