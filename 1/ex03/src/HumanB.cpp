#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

std::string HumanB::getName() {
	return name; 
}

void HumanB::attack() {
	if (weapon != nullptr) {
		std::cout << getName() << " attacks with their " << weapon->getType() << std::endl;
	} else {
		std::cout << getName() << " attacks with their " << "hands" << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

HumanB::~HumanB() {

}
